#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define endl '\n'

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x1, p1, x2, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;
        // ll value1 = ((pow(10, p1)) * x1) ;
        // ll value2 = ((pow(10, p2)) * x2) ;
        // cout << value1 << endl;
        // cout << value2 << endl;
        // cout << pow(10, 2) << endl;
        if (((pow(10, p1)) * x1) == ((pow(10, p2)) * x2))
        {
            cout << "=" << endl;
        }
        else if (((pow(10, p1)) * x1) > ((pow(10, p2)) * x2))
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "<" << endl;
        }
    }
    return 0;
}