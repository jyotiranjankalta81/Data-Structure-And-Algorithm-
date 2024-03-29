// We are given n items with {weight,value} of each item and the capacity
// of knapsack (Sack)'W'.we need to put these items in knapsack such that final
// value of items in knapsack is maximum

#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <climits>
#include <vector>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

bool compare(pii p1, pii p2)
{
    // we take the value in double because it may be come in double
    double v1 = (double)p1.ff / p1.ss;
    double v2 = (double)p2.ff / p2.ss;

    return v1 > v2;
}

int main()
{

    int n;
    cin >> n;
    // make a container
    vii a(n);
    rep(i, 0, n)
    {
        cin >> a[i].ff >> a[i].ss;
    }
    // weight of bori
    int w;
    cin >> w;
    // sort the array
    sort(a.begin(), a.end(), compare);
    int ans = 0;
    rep(i, 0, n)
    {
        if (w >= a[i].ss)
        {
            ans += a[i].ff;
            w -= a[i].ss;
            continue;
        }

        double vw = (double)a[i].ff / a[i].ss;
        ans += vw * w;
        w = 0;
        break;
    }
    cout << ans << endl;
    return 0;
}

// fractionalknapsack problem