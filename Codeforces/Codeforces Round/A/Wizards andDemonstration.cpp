#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

int main()
{
    double n, x, y;
    cin >> n;
    cin >> x;
    cin >> y;
    // cout << ((n * y) / 100) - x << endl;
    int req = ceil((y / 100) * n);
    if (x >= req)
    {
        cout << 0;
    }
    else
    {
        cout << req - x;
    }
    return 0;
}