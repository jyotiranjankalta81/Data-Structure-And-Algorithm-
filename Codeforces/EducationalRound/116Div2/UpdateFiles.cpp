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
        ll n, k;
        cin >> n >> k;
        n--;
        ll ans = 0;
        ll curr = 1;
        while (n > 0 && curr <= k)
        {
            ans++;
            n -= curr;
            curr = 2 * curr;
        }
        ans += (n + k - 1) / k;
        cout << ans << endl;
    }

    return 0;
}
