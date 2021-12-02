#include <iostream>
using namespace std;
int main()
{
    int t, s, x;
    cin >> t >> s >> x;
    int c = 1;
    int sum = t;
    if (t == x)
        cout << "YES";
    else
    {
        while (sum <= x)
        {
            if (t + c * s == x)
            {
                cout << "YES";
                break;
            }
            if (t + c * s + 1 == x)
            {
                cout << "YES";
                break;
            }
            sum = t + c * s + 1;
            c++;
        }
        if (sum > x)
            cout << "NO";
    }
}
