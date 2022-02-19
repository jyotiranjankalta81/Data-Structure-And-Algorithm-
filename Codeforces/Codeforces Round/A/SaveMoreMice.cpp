#include <bits/stdc++.h>
// #include <iostream>
using namespace std;

// void solve()
// {

//     int n, k;
//     // int k;
//     cin >> n >> k;
//     int arr[k];
//     // cin >> k;
//     for (int i = 0; i < k; i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }
//     sort(arr, arr + k);
//     int mouse = 0;
//     int cat = 0;
//     int posDistance = 0;
//     for (int i = k - 1; i >= n; i--)
//     {
//         posDistance = abs(n - arr[i]);
//         cat = cat + posDistance;
//         if (cat >= n)
//         {
//             cout << mouse << endl;
//             // mouse++;
//             return;
//         }
//         mouse++;
//     }
//     cout << mouse << endl;
// }
void solve()
{

    int n, k;
    cin >> n >> k;

    int arr[k];
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + k);

    int len = 0;
    int count = 0;

    for (int i = k - 1; i >= 0; i--)
    {
        len += (n - arr[i]);
        if (len >= n)
        {
            cout << count << endl;
            return;
        }
        count++;
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        solve();
    }
    return 0;
}