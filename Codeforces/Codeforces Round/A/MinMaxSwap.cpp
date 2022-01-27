#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
            {
                swap(arr1[i], arr2[i]);
            }
            // cout << arr1[i];
            // cout << arr2[i] << endl;
        }
        // sort(arr1, arr1 + n);
        int a = *max_element(arr1, arr1 + n);
        // sort(arr2, arr2 + n);
        int b = *max_element(arr2, arr2 + n);
        // int ans=0;
        cout << a * b << endl;
        // cout << b << endl;
    }
    return 0;
}