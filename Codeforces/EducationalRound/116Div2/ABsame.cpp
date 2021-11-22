#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    char first = s[0], last = s[n - 1];
    if (first != last)
        s[0] = s[n - 1]; //s[n-1]=s[0]
    cout << s << endl;
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