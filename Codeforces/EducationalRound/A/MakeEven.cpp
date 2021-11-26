#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll ok = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
    {
        ll d = (s[i] - '0');
        if (d % 2 == 0 && i == 0)
        {
            cout << 1 << endl;
            return;
        }
        else if (d % 2 == 0)
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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