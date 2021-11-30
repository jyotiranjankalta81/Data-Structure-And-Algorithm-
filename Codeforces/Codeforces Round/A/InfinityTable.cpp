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
void solve()
{
    ll k;
    cin >> k;
    ll p = sqrtl(k);
    if (k == 1)
    {
        cout << 1 << " " << 1 << endl;
        return;
    }
    if (p * p == k)
    {
        cout << p << " " << 1 << endl;
        return;
    }
    p++;
    ll d = p * p;
    ll q = p - 1;
    ll mn = d - q;  //right range of particular square number
    ll up = mn - q; //up range
    ll row = p, col = p;
    if (k >= mn)
    {
        col = d - k + 1;
    }
    else
    {
        row = p - (mn - k);
    }
    cout << row << " " << col << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}