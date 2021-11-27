#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    int count = 0, sum = 0;
    vector<int> arr(n);
    // if (n == l && l == r && r == k && k == n)
    // {
    //     cout << 1 << endl;
    // }

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // string a = to_string(a1);
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > k)
        {
            break;
        }

        if (l <= arr[i] && arr[i] <= r)
        {
            count++;
            // sum = sum + arr[i];
            k -= arr[i];
        }
    }
    cout << count << endl;
    ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}