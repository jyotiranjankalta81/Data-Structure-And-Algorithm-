#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n == 1)
            cout << "0 1\n";
        else
        {
            cout << -(n - 1) << " " << n << "\n";
        }
    }
}