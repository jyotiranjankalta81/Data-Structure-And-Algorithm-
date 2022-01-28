#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second;
        }
        sort(all(v));
        for (int i = 0; i < n; i++)
        {
            if (v[i].first <= k)
            {
                k += v[i].second;
            }
            else
                break;
        }
        cout << k << "\n";
    }
    return 0;
}