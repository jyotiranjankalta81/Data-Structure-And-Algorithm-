#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = -1, y = -1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                x = i;
                y = i + 1;
                break;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}