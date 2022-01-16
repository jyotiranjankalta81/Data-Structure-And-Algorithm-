#include <bits/stdc++.h>
using namespace std;

// Longest substring with K unique characters
int longestSubstringWithKUniqueCharacters(string str, int n, int k)
{
    int i, j, res = INT_MIN;
    map<char, int> mp;
    i = j = 0;

    while (j < n)
    {
        mp[str[j]]++;
        if (mp.size() == k)
            res = max(res, j - i + 1);
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[str[i]]--;
                if (mp[str[i]] == 0)
                    mp.erase(str[i]);
                ++i;
                if (mp.size() == k)
                    res = max(res, j - i + 1);
            }
        }
        ++j;
    }

    return res;
}

int main()
{

    string s = "aabacbebebe";
    int k = 3;
    int n = s.size();
    // kUniques(s, k);
    cout << longestSubstringWithKUniqueCharacters(s, n, k) << endl;
    return 0;
}