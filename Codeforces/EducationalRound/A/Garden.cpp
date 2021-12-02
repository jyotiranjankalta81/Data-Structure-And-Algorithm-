#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define S(a) scanf("%d", &a)
int main()
{

    int n, k;
    S(n), S(k);
    int a[n + 1];
    for (int i = 0; i < n; ++i)
    {
        S(a[i]);
    }

    int ans = 1e7;
    for (int j = 0; j < n; ++j)
    {
        if (k % a[j] == 0)
        {
            ans = min(ans, k / a[j]);
        }
    }
    printf("%d\n", ans);

    return 0;
}
