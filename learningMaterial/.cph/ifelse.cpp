#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
            /* code */
        }
        else
        {
            cout << c << endl;
        }

        /* code */
    }
    else
    {
        if (b > c)
        {
            cout << b << endl;
            /* code */
        }
        else
        {
            cout << c << endl;
        }
    }
    return 0;
}