#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                cnt0++;
            }
        }
        if (cnt0 != cnt1)
        {
            cout << min(cnt0, cnt1) << "\n";
        }
        else
            cout << cnt0 - 1 << "\n";
    }

    return 0;
}