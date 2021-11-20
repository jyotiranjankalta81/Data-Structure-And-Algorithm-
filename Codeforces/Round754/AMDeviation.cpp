#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int p = (a + b - 2 * c);
        int q = (b + c - 2 * a);
        int r = (a + c - 2 * b);

        if (p % 3 == 0 || q % 3 == 0 || r % 3 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }
}