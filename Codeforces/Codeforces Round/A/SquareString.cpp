#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// string ss(string s){

// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = s.size();
        int d = a / 2;
        string s1 = s.substr(0, d);
        string s2 = s.substr(d);
        if (a % 2 == 0 && s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        // if (a % 2 == 0 && s[0] == s[(a / 2)])
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}