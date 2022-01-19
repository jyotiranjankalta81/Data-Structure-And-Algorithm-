// #include <iostream>
// #include <vector>
// #include <queue>

// using namespace std;

// void sort_k_sorted_array(int *arr, int n, int k)
// {
//     priority_queue<int, vector<int>, greater<int>> minh;
//     int j = 0;
//     for (int i = 0; i < n; i++)
//     {
//         minh.push(arr[i]);
//         if (minh.size() > k)
//         {
//             arr[j] = minh.top();
//             minh.pop();
//             j++;
//         }
//     }
//     while (minh.size() > 0)
//     {
//         j++;
//         arr[j] = minh.top();
//         minh.pop();
//     }
// }

// void print_array(int *arr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int arr[] = {6, 5, 3, 1, 10, 9, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     cout << "Sort the k sorted array in which k = 3" << endl;
//     cout << "\nThe Sorted array : ";
//     sort_k_sorted_array(arr, n, k);
//     print_array(arr, n);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    priority_queue<int, vector<int>, greater<int>> minh;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        v.clear();
        for (int i = 0; i < n; i++)
        {
            minh.push(arr[i]);
            if (minh.size() > k)
            {
                v.push_back(minh.top());
                minh.pop();
            }
        }
        while (minh.size() > 0)
        {
            v.push_back(minh.top());
            minh.pop();
        }
        for (int i = 0; i < n; i++)
        {
            cout << v.at(i) << " ";
        }
        cout << endl;
    }
    // code
    return 0;
}