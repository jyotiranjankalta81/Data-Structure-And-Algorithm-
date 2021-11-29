#include <bits/stdc++.h>
typedef long long ll;
#define mo 1000000007
using namespace std;

int main()
{
    // another approach could be finding index of nearest greater to the left
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    vector<int> v(n);
    stack<pair<int, int>> s;
    for (int i = 0; i < n; ++i)
    {
        if (s.size() == 0)
        {
            v[i] = 1;
        }
        else if (s.size() > 0 && s.top().first > arr[i])
        {
            v[i] = 1;
        }
        else if (s.size() > 0 && s.top().first <= arr[i] && arr[i] < arr[i - 1])
        {
            v[i] += 1;
            while (s.size() > 0 && s.top().first <= arr[i])
            {
                ++v[i];
                s.pop();
            }
        }
        else if (s.size() > 0 && s.top().first <= arr[i] && arr[i] >= arr[i - 1])
        {
            v[i] += 1;
            while (s.size() > 0 && s.top().first <= arr[i])
            {
                v[i] += v[s.top().second];
                s.pop();
            }
        }
        s.push({arr[i], i});
    }
    for (auto x : v)
        cout << x << " ";
    return 0;
}