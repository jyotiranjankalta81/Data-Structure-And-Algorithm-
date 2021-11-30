#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll n = 2 * abs(a - b);
    if (a > n || b > n || c > n)
        cout << -1 << '\n';
    else
    {
        ll d = n / 2 + c;
        while (d > n)
            d -= n;
        cout << d << '\n';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}