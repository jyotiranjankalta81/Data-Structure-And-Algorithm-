#include <bits/stdc++.h>
using namespace std;
// Nearest Greater to Left
// 1 3 2 4
vector<int> nearestGreaterToLeft(vector<int> v)
{
    vector<int> vec;
    stack<int> st;
    for (int i = 0; i < v.size(); i++)
    {
        if (st.size() == 0)
        {
            vec.push_back(-1);
        }
        else if (st.size() > 0 && v[i] > st.top())
        {
            vec.push_back(st.top());
        }
        else if (st.size() > 0 && v[i] <= st.top())
        {
            while (st.top() >= v[i] && st.size() > 0)
            {
                st.pop();
            }
            if (st.top() > v[i])
            {
                vec.push_back(v[i]);
            }
            else
            {
                vec.push_back(-1);
            }
        }
        st.push(v[i]);
    }
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
    vec = nearestGreaterToLeft(v);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return (0);
}