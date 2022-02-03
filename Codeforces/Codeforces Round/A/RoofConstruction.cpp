#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    vector<int> power2;
    int cur = 1;
    for (int i = 0; i < 25; i++)
    {
        power2.push_back(cur);
        cur *= 2;
    }
    while (t--)
    {
        int n;
        cin >> n;
        int index;
        for (int i = 0; i < power2.size(); i++)
        {
            if (power2[i] <= n - 1)
            {
                index = power2[i];
            }
        }
        for (int i = n - 1; i >= index; i--)
        {
            cout << i << " ";
        }
        for (int i = 0; i < index; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}