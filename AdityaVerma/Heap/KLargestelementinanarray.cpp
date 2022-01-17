// #include <bits/stdc++.h>
// using namespace std;
// priority_queue<int> maxH;

// // int kthSmallest(int A, int n, int k)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         maxH.push_back(A[i]);
// //         if (maxH.size() > k)
// //         {
// //             maxH.pop();
// //         }
// //     }
// //     return maxH.top();
// // }

// vector<int> Solution::solve(vector<int> &A, int B)
// {
//     std::priority_queue<int, vector<int>, greater<int>> minh;
//     int i;
//     vector<int> ans;
//     for (i = 0; i < A.size(); i++)
//     {
//         minh.push(A[i]);
//         if (minh.size() > B)
//         {
//             minh.pop();
//         }
//     }

//     while (minh.size() != 0)
//     {
//         ans.push_back(minh.top());
//         minh.pop();
//     }
//     return ans;
// }

// vector<int> Solution::solve(vector<int> &A, int B)
// {
//     priority_queue<int, vector<int>, greater<int>> minheap;
//     vector<int> v;
//     for (int i = 0; i < A.size(); i++)
//     {
//         minheap.push(A[i]);
//         if (minheap.size() > B)
//         {
//             minheap.pop();
//         }
//     }
//     while (minheap.size() > 0)
//     {
//         cout << minheap.top() << " ";
//         minheap.pop();
//     }

//     return v;
// }
// int main()
// {

//     int A[] = {12, 3, 5, 7, 19};
//     int n = sizeof(A) / sizeof(A[0]), k = 3;
//     cout << "K'th smallest element is " << solve(A, k);
//     return 0;
// }

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {

        priority_queue<int, vector<int>, greater<int>> minheap;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            minheap.push(arr[i]);
            if (minheap.size() > k)
            {
                minheap.pop();
            }
        }
        while (minheap.size() > 0)
        {
            cout << minheap.top() << " ";
            minheap.pop();
        }
        reverse(v.begin(), v.end());

        return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends