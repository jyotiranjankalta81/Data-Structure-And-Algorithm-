#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
vector<ll> v;
void calc()
{
    for (int i = 1; i <= 100000; i++)
    {
        if (i % 3 == 0)
            continue;
        else if (i % 10 == 3)
            continue;
        v.push_back(i);
    }
}
void solve()
{
    ll k;
    cin >> k;
    ll ans = 0;
    cout << v[k - 1] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    calc();
    while (t--)
    {
        solve();
    }
    return 0;
}