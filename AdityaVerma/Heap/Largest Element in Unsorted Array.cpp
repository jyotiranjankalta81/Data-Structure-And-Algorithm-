#include <bits/stdc++.h>
using namespace std;
priority_queue<int> maxH;

int kthSmallest(int arr, int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        maxH.push_back(arr[i]);
        if (maxH.size() > k)
        {
            maxH.pop();
        }
    }
    return maxH.top();
}

int main()
{

    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]), k = 2;
    cout << "K'th smallest element is " << kthSmallest(arr, n, k);
    return 0;
}