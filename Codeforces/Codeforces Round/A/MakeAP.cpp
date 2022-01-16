#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((2 * b) == (a + c))
    {
        return true;
    }
    else if ((2 * b) > (a + c))
    {
        if ((((((2 * b) - (a + c)) + a) % a) == 0) || (((((2 * b) - (a + c)) + c) % c) == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if ((2 * b) < (a + c))
    {
        if (((((a + c) - (2 * b)) + (2 * b)) % (2 * b)) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cin>>a>>b>>c;
        // solve()
        if (solve() == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}