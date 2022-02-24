#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define S(a) scanf("%d", &a)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        // int n = s.size();
        // int

        // // cout << s[n - 1] << endl;
        // if (s[0] == 'R' || s[0] == 'G' || s[0] == 'B' || s[n - 1] == 'r' || s[n - 1] == 'g' || s[n - 1] == 'b')
        // {
        //     /* code */
        //     cout << "NO" << endl;
        // }
        // else
        // {
        //     cout << "YES" << endl;
        // }
        // int n = s.find('R');
        // int m = s.find('r');
        // cout << n << " " << m << endl;

        if ((s.find('R') > s.find('r')) && (s.find('G') > s.find('g')) && (s.find('B') > s.find('b')))
        {
            /* code */
            cout << "YES" << endl;
        }
        else
        {
            /* code */
            cout << "NO" << endl;
        }
    }
    return 0;
}