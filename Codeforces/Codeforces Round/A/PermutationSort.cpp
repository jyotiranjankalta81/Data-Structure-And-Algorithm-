#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9 + 7;
ll mod(ll x)
{
    return (x % M + M) % M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a) * mod(b)));
}

ll add(ll a, ll b)
{
    return mod(mod(a) + mod(b));
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != i)
            ok = false;
    }
    if (ok == true)
    {
        cout << 0 << "\n";
        return;
    }
    if (a[0] == 0 || a[n - 1] == n - 1)
    {
        cout << 1 << "\n";
    }
    else if (a[0] == n - 1 && a[n - 1] == 0)
    {
        cout << 3 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
