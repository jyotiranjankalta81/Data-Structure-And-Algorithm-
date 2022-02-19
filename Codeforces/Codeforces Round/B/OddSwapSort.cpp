#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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
            /* code */
            cin >> arr[i];
        }
        int counter = 1;
        while (counter < n)
        {
            for (int i = 0; i < n - counter; i++)
            {
                /* code */
                if (arr[i] > arr[i + 1] && (((arr[i] + arr[i + 1]) % 2) == 1))
                {
                    // int temp = arr[i];
                    swap(arr[i], arr[i + 1]);
                    // arr[i] = arr[i + 1];
                }
            }
            counter++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     /* code */
        //     cout << arr[i] << " ";
        // }
        // cout << endl;

        if (std::is_sorted(arr, arr + n))
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}

#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <stack>
#define ll long long
#define pii pair<int, int>
#define x first
#define y second
using namespace std;
int a[100010];
int odd[100010];
int even[100010];
void solve()
{
    int max_odd = 0, max_even = 0;
    ll n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (i = 1; i <= n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] >= max_even)
                max_even = a[i];
            else
            {
                printf("NO\n");
                return;
            }
        }
        else
        {
            if (a[i] >= max_odd)
                max_odd = a[i];
            else
            {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}