#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = 1;
        ll sum = 0;
        int count = 0;
        while (sum < n)
        {
            sum += x;
            x += 2;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}