#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(begin(a), end(a));
    sort(begin(b), end(b));

    for (int i = 0; i < n; i++)
    {
        int rem = b[i] - a[i];
        if (rem == 0 || rem == 1)
        {
            continue;
        }
        else
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
