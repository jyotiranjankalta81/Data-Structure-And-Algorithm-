#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a == b)
            cout << 0 << " " << 0 << '\n';
        else
        {
            ll gcd = abs(a - b);
            ll operation = min(a % gcd, gcd - a % gcd);
            cout << gcd << " " << operation << '\n';
        }
    }
}