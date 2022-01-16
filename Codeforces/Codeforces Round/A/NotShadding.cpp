#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {

        ll n, m, r, c;
        cin >> n >> m >> r >> c;
        r--;
        c--;
        char a[n][m];
        bool hasB = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'B')
                    hasB = true;
            }
        }
        if (hasB == false)
            cout << -1;
        else if (a[r][c] == 'B')
            cout << 0;
        else
        {
            bool flag = false;
            for (int i = 0; i < n; i++)
            {
                if (a[i][c] == 'B')
                    flag = true;
            }
            for (int j = 0; j < m; j++)
            {
                if (a[r][j] == 'B')
                    flag = true;
            }
            if (flag == true)
                cout << 1;
            else
                cout << 2;
        }

        cout << "\n";
    }

    return 0;
}
