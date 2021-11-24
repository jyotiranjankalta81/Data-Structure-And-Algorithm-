#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 5 == 0)
    {
        cout << x / 5 << endl;
    }
    else if (x % 5 != 0 && x > 5)
    {
        int result = (x / 5) + 1;
        cout << result << endl;
    }

    else
    {
        cout << 1 << endl;
    }
    return 0;
}