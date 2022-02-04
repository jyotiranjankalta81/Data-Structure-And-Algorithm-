#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        ll last = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > last)
            {
                ans++;
                last = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}