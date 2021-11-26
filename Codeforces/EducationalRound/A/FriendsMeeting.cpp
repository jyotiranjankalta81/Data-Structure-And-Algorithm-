#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b || 1 > a > 1000 || 1 > b > 1000)
        return 0;
    if (abs(a - b) % 2 == 0)
    {
        int x = (abs(a - b)) / 2;
        int t = 0;
        for (int i = 0; i <= x; i++)
        {
            t = t + i;
        }
        cout << t * 2 << endl;
    }

    else
    {
        int y = (abs(a - b)) / 2;
        int t = 0;
        for (int i = 1; i <= y; i++)
        {
            t = t + i;
        }
        cout << (2 * t) + (y + 1) << endl;
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int a, b;
//   cin >> a >> b;
//   int d = abs(a - b);
//   cout << (d / 2 + (d & 1)) * (d / 2 + 1);
// }