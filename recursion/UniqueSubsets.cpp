// { Driver Code Starts
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //Function to find all possible unique subsets.
    void helper(vector<int> arr, int n, int index, vector<int> &subset, vector<vector<int>> &result)
    {
        result.push_back(subset);
        if (index == n)
        {
            return;
        }
        subset.push_back(arr[index]);
        helper(arr, n, index + 1, subset, result);
        subset.pop_back();
        for (int i = index + 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
            {
                subset.push_back(arr[i]);
                helper(arr, n, i + 1, subset, result);
                subset.pop_back();
            }
        }
    }
    //Function to find all possible unique subsets.
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>> result;
        vector<int> subset;
        sort(arr.begin(), arr.end());
        helper(arr, n, 0, subset, result);
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    int n;
    cin >> n;
    vector<int> A;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    Solution obj;
    vector<vector<int>> result = obj.AllSubsets(A, n);
    // printing the output
    for (int i = 0; i < result.size(); i++)
    {
        cout << '(';
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << " ";
        }
        cout << ")";
    }
    cout << "\n";
    // }
}

// } Driver Code Ends