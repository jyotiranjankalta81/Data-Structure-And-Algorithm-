#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a;
    int MAX = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (int(sqrt(a)) * int(sqrt(a)) != a)
            MAX = max(MAX, a);
    }
    cout << MAX << endl;
    return 0;
}