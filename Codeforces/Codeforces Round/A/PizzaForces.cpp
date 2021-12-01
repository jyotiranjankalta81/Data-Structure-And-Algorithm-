#include <iostream>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 != 0)
            n++;
        if (n >= 6)
        {
            cout << (n / 2) * 5 << "\n";
        }
        else
        {
            cout << 15 << "\n";
        }
    }
    return 0;
}