// #include <bits/stdc++.h>
// #include <math.h>

// using namespace std;
// typedef long long ll;
// typedef unsigned long long ull;
// #define M_PI 3.14159265358979323846

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         cout << pow(10, n) - (((n - 2) * 10) + n) << endl;
//     }
//     return 0;
// }

// sksama bhai ye lo ....easy readable code...mene lika contest ke baad ...:((
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        string s1 = "9890123456789";
        string s2 = "0123456789";
        while (n > s1.length()) // if length of n is greater than given length of s1 append s2 that many times..
        {
            s1.append(s2);
        }

        for (int i = 0; i < n; i++)
        {
            cout << s1[i];
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int j = 0;
        string ans = "989";
        if (n < 4)
        {
            cout << ans.substr(0, n) << "\n";
            continue;
        }
        n -= 3;
        while (n--)
        {
            ans += j + '0';
            j = (j + 1) % 10;
        }
        cout << ans << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define int long long

int solveTestCase()
{
    int n;
    cin >> n;

    string s = "989";
    if (n <= 3)
        return cout << s.substr(0, n) << "\n", 0;

    cout << s;
    for (int i = 3; i < n; i++)
        cout << (i - 3) % 10;
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solveTestCase();
}
