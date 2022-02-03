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
        int min;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
            {
                /* code */
                min = arr[0];
            }
            else
            {
                min = min & arr[i];
            }
        }
        cout << min << endl;
    }
    return 0;
}