#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll x)
{
    if (x % 2 == 0)
    {
        return x / 2;
    }
    else
    {
        return -x + solve(x - 1);
    }
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << solve(r) - solve(l - 1) << endl;
    }
    return 0;
}