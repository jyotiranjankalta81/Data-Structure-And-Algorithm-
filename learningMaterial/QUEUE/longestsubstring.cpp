// #include<iostream>
// using namespace std;
// #include<vector>
// #include<algorithm>
// #include<math.h>

// int main(){
//     string s;
//     cin>>s;
//     vector<int>dict(256,-1);
//     int maxLen = 0, start=-1;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (dict[s[i]]>start)
//         {
//             start=dict[s[i]];
//             dict[s[i]]=i;
//             maxLen=max(maxLen,i-start);
//         }
        
//     }
//     cout<<maxLen;
//     return 0;

// }

// C++ program to find the length of the longest substring
// without repeating characters
// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int longestUniqueSubsttr(string str)
{
	int n = str.size();
	int res = 0; // result

	for (int i = 0; i < n; i++) {
		
		// Note : Default values in visited are false
		vector<bool> visited(256);

		for (int j = i; j < n; j++) {

			// If current character is visited
			// Break the loop
			if (visited[str[j]] == true)
				break;

			// Else update the result if
			// this window is larger, and mark
			// current character as visited.
			else {
				res = max(res, j - i + 1);
				visited[str[j]] = true;
			}
		}

		// Remove the first character of previous
		// window
		visited[str[i]] = false;
	}
	return res;
}

// Driver code
int main()
{
	string str = "geeksforgeeks";
	cout << "The input string is " << str << endl;
	int len = longestUniqueSubsttr(str);
	cout << "The length of the longest non-repeating "
			"character substring is "
		<< len;
	return 0;
}
