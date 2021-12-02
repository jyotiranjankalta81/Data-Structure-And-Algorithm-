#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x1;
        cin >> x1;
        if (x1 % 3 == 0 || x1 % 7 == 0 || x1 % 10 == 0 || x1 >= 12)
        {
            cout << "YES" << endl;
        }
        // else if (/* condition */)
        // {
        //     /* code */
        // }
        else
        {
            cout << "NO" << endl;
        }
    }
}