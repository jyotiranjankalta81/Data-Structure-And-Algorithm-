#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x >> y;
    cin >> a >> b;
    if (abs(x - a) == abs(y - b))
    {
        cout << abs(x - a) << endl;
    }
    else
    {
        cout << max(abs(x - a), abs(y - b)) << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int t;
    // // cin>>t;
    // t=1;
    // while(t--)
    // {
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << max(abs(x1 - x2), abs(y1 - y2));
    // }
    return 0;
}