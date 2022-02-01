#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if ((((n / 10) * 10) + i) % 7 == 0)
                {
                    cout << ((n / 10) * 10) + i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}