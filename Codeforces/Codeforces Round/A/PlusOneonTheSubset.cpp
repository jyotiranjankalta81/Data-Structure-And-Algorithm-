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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }

        // sort(arr.begin(), arr.end());
        int ans = abs(arr[0] - arr[n - 1]);
        // cout << arr[0] << " " << arr[n - 1] << endl;
        cout << ans << endl;
    }
    return 0;
}