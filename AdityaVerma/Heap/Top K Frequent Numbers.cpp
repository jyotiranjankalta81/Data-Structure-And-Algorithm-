// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> topK(vector<int> &nums, int k)
    {
        // Code here
        vector<int> vec;
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++)
        {
            um[nums[i]]++;
        }
        // pair<int,int>
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_h;
        for (auto i = um.begin(); i != um.end(); i++)
        {
            min_h.push({i->second, i->first});
            if (min_h.size() > k)
                min_h.pop();
        }
        for (int i = 0; i < k; i++)
        {
            vec.push_back(min_h.top().second);
            min_h.pop();
        }
        // reverse(vec.begin(), vec.end());
        return vec;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends