#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        /* code */
        // ll a, b;
        // cin >> a;
        // cin >> b;
        // if (a > 0 && b > 0 && (a != b))
        // {
        //     cout << "YES" << endl;
        //     cout << a * (b - 1) << " " << a * (b + 1) << " " << 2 * a * b << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        ll a, b;
        cin >> a >> b;
        ll z = 2 * a * b;
        ll x = a * (b - 1);
        ll y = a * (b + 1);
        if (x == y || z == y || x == z || x <= 0 || y <= 0 || z <= 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
            cout << "YES" << endl;
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}