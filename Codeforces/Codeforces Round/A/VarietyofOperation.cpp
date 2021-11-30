#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1000000007;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << 0 << endl;
        }
        else if (a == b && a > 0 && b > 0)
        {
            cout << 1 << endl;
        }
        else if (abs(a - b) % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}