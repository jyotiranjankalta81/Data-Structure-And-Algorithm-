// let three points A(0,0) B(x.y) C(a,b)
// d(A,B)=|x-0|+|y-0|=(x+y)
// d(A,C)=(x+y)/2 = a+b
// d(B,C)=(x+y)/2=(x-a)+(y-b)

// if x and y is even then a=x/2 and b=y/2

// if x and y is odd then a=x/2 and b=(y/2)+1

#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
        {
            cout << a / 2 << " " << b / 2 << endl;
        }
        else if (a % 2 == 1 && b % 2 == 1)
        {
            cout << a / 2 << " " << (b / 2) + 1 << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}
