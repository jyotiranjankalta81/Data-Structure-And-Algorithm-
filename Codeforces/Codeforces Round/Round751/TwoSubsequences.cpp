#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // sort(s1.begin(), s1.end());
        int n = s.size();
        char ch;
        string s1;
        vector<long long> idx(26, 0);
        for (int i = 0; i < n - 1; i++)
        {
            idx[s[i] - 'a'] = i + 1;
        }
        long long index;
        for (int i = 0; i < 25; i++)
        {
            if (idx[i] > 0)
            {
                index = idx[i];
                ch = 'a';
                ch += i;
                break;
            }
        }
        s1 = s.substr(0, index - 1) + s.substr(index);
        cout << ch << " " << s1 << endl;

        // cout << s1.substr(0, 1) << " " << s1.substr(1, n) << endl;
    }

    return 0;
}