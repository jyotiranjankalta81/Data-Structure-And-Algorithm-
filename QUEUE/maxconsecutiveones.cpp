// C++ program for the above approach
// #include <bits/stdc++.h>
// Pseudocode
// int zerocnt=0,i=0,ans=0;
// for(int j=0; j<A.sixe();j++){
//     if (A[j]==0)
//     {
//         zerocnt++;
//     }
//     while (zerocnt>K)
//     {
//         if (A[i]==0)
//         {
//             zerocnt--;
//         }
//         i++;
        
//     }
//     ans = max(ans,j-i+1);
    
    
// }

#include<iostream>
#include<algorithm>
using namespace std;

// Function to find the maximum number of
// consecutive 1's after flipping all
// zero in a K length subarray
int findmax(int arr[], int n, int k)
{
	// Initialize variable
	int trav, i;
	int c = 0, maximum = 0;

	// Iterate unil n-k+1 as we
	// have to go till i+k
	for (i = 0; i < n - k + 1; i++) {
		trav = i - 1;
		c = 0;

		/*Iterate in the array in left direction
		till you get 1 else break*/
		while (trav >= 0 && arr[trav] == 1) {
			trav--;
			c++;
		}
		trav = i + k;

		/*Iterate in the array in right direction
		till you get 1 else break*/
		while (trav < n && arr[trav] == 1) {
			trav++;
			c++;
		}
		c += k;

		// Compute the maximum length
		if (c > maximum)
			maximum = c;
	}

	// Return the length
	return maximum;
}

// Driver code
int main()
{
	int k = 3;
	// Array initialization
	int arr[] = { 0, 0, 1, 1, 0, 0, 0, 0 };

	// Size of array
	int n = sizeof arr / sizeof arr[0];
	int ans = findmax(arr, n, k);
	cout << ans << '\n';
}
