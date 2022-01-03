#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// string ss(string s){// }
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    string s;
    cin >> s;
    int count = 0;
    int a = s.size();
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e' || s[i] == 'n')
        {
            count++;
        }
    }

    // cout << count << endl;

    if (count >= (a / 2))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    // int d = a / 2;
    // string s1 = s.substr(0, d);
    // string s2 = s.substr(d);
    // if (a % 2 == 0 && s1 == s2)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    // if (a % 2 == 0 && s[0] == s[(a / 2)])
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
    // }

    return 0;
}