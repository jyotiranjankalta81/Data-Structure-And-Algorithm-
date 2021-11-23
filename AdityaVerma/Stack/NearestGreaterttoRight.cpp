
// Jyoti Ranjan Kalta
// Nearest Greater to right
// 1 3 2 4
#include <bits/stdc++.h>
using namespace std;

vector<int> nearestGreaterToRight(vector<int> v)
{
    stack<int> st;
    vector<int> vec;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (st.size() == 0)
        {
            vec.push_back(-1);
        }
        else if (st.size() > 0 && v[i] < st.top())
        {
            vec.push_back(st.top());
        }
        else if (v[i] >= st.top() && st.size() > 0)
        {
            while (st.size() > 0 && v[i] >= st.top())
            {
                st.pop();
            }
            if (st.size() == 0)
            {
                vec.push_back(-1);
            }
            else
            {
                vec.push_back(st.top());
            }
        }
        st.push(v[i]);
    }
    reverse(vec.begin(), vec.end());
    return vec;
}

int main()
{
    vector<int> v, vec;
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vec = nearestGreaterToRight(v);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return (0);
}