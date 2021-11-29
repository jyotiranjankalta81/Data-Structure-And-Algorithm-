#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, x, cnt = 0;
        ;
        cin >> n;
        vector<int> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (!is_sorted(a.begin(), a.end()))
        {
            for (i = cnt % 2; i < n - 1; i = i + 2)
            {
                if (a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                }
            }
            cnt++;
        }
        cout << cnt << "\n";
    }
}
