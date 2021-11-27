#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int a, b, c, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int d1 = max(a, b);
        int d2 = max(b, c);
        int d = max(d1, d2);
        // cout<<d-a+1<<" "<<d-b+1
        if (a == b && b == c)
        {
            cout << a + 1 << " " << b + 1 << " " << c + 1 << endl;
        }

        else if (d == a)
        {
            cout << 0 << " " << d - b + 1 << " " << d - c + 1 << endl;
        }
        else if (d == b)
        {
            // cout << d - b + 1 << " ";
            cout << d - a + 1 << " " << 0 << " " << d - c + 1 << endl;
        }
        else
        {
            // cout << d - c + 1;
            cout << d - a + 1 << " " << d - b + 1 << " " << 0 << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(0, max(b, c) + 1 - a) << ' ' << max(0, max(a, c) + 1 - b);
        cout << ' ' << max(0, max(a, b) + 1 - c) << '\n';
    }
    return 0;
}
