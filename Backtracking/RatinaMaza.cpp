// { Driver Code Starts
// Initial template for C++

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// } Driver Code Ends
// User function template for C++
struct pair_hash
{
    inline std::size_t operator()(const std::pair<int, int> &v) const
    {
        return v.first * 31 + v.second;
    }
};
class Solution
{
public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        std::vector<std::string> res;
        if (m[0][0] == 0)
        {
            return res;
        }
        std::unordered_set<std::pair<int, int>, pair_hash> set;
        recur(res, m, n, 0, 0, set, "");
        std::sort(res.begin(), res.end());
        return res;
    }
    void recur(std::vector<std::string> &res, vector<vector<int>> &m, int n, int i, int j, std::unordered_set<std::pair<int, int>, pair_hash> set, string path)
    {
        if (i == n - 1 && j == n - 1)
        {
            res.push_back(path);
            return;
        }
        set.insert(std::make_pair(i, j));
        if (i != n - 1 && m[i + 1][j] != 0 && set.count(std::make_pair(i + 1, j)) == 0)
        {
            recur(res, m, n, i + 1, j, set, path + "D");
        }
        if (i != 0 && m[i - 1][j] != 0 && set.count(std::make_pair(i - 1, j)) == 0)
        {
            recur(res, m, n, i - 1, j, set, path + "U");
        }
        if (j != n - 1 && m[i][j + 1] != 0 && set.count(std::make_pair(i, j + 1)) == 0)
        {
            recur(res, m, n, i, j + 1, set, path + "R");
        }
        if (j != 0 && m[i][j - 1] != 0 && set.count(std::make_pair(i, j - 1)) == 0)
        {
            recur(res, m, n, i, j - 1, set, path + "L");
        }
    }
};

// { Driver Code Starts.

int main()
{
    // int t;
    // cin >> t;
    // while (t--) {
    int n;
    cin >> n;
    vector<vector<int>> m(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }
    Solution obj;
    vector<string> result = obj.findPath(m, n);
    if (result.size() == 0)
        cout << -1;
    else
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";
    cout << endl;
    // }
    return 0;
} 
// } Driver Code Ends