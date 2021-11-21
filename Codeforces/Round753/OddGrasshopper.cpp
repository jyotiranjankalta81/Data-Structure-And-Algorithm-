#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin >> t sc while (t--)
#define ff first
#define sc ;
#define ss second
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ll long long
#define Ranjan ios::sync_with_stdio(false);
#define Kalta cin.tie(NULL);

int main()
{
    tc
    {
        ll x, n;
        cin >> x >> n;
        ll k = (n / 4) * 4;
        if (x % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << x << "\n";
            }
            else if (n % 4 == 1)
            {
                cout << x - (k + 1) << endl;
            }
            else if (n % 4 == 2)
            {
                cout << x + 1 << endl;
            }
            else
            {
                cout << x + k + 4 << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << x << "\n";
            }
            else if (n % 4 == 1)
            {
                cout << x + (k + 1) << endl;
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << endl;
            }
            else
            {
                cout << x - (k + 4) << endl;
            }
        }
    }
}