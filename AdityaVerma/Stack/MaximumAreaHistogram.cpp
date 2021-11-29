// Code
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 2, 5, 4, 5, 1, 6};
    // To calculate NLR
    vector<int> right;
    stack<pair<int, int>> s1;

    for (int i = 6; i >= 0; i--)
    {
        if (s1.empty())
        {
            right.push_back(7);
        }
        else if (s1.size() > 0 && s1.top().first < arr[i])
        {
            right.push_back(s1.top().second);
        }
        else if (s1.size() > 0 && s1.top().first >= arr[i])
        {
            while (s1.size() > 0 && s1.top().first >= arr[i])
            {
                s1.pop();
            }
            if (s1.empty())
            {
                right.push_back(7);
            }
            else
            {
                right.push_back(s1.top().second);
            }
        }
        s1.push({arr[i], i});
    }
    reverse(right.begin(), right.end());
    for (int i = 0; i < 7; i++)
    {
        cout << right[i] << " ";
    }
    cout << endl;
    // To calculate NLL

    vector<int> left;
    stack<pair<int, int>> s2;

    for (int i = 0; i < 7; i++)
    {
        if (s2.empty())
        {
            left.push_back(-1);
        }
        else if (s2.size() > 0 && s2.top().first < arr[i])
        {
            left.push_back(s2.top().second);
        }
        else if (s2.size() > 0 && s2.top().first >= arr[i])
        {
            while (s2.size() > 0 && s2.top().first >= arr[i])
            {
                s2.pop();
            }
            if (s2.empty())
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(s2.top().second);
            }
        }
        s2.push({arr[i], i});
    }
    for (int i = 0; i < 7; i++)
    {
        cout << left[i] << " ";
    }
    cout << endl;
    vector<int> width;
    for (int i = 0; i < 7; i++)
    {
        width.push_back(right[i] - left[i] - 1);
    }
    for (int i = 0; i < 7; i++)
    {
        cout << width[i] << " ";
    }
    cout << endl;
    int max = 0;
    for (int i = 0; i < 7; i++)
    {
        if ((width[i] * arr[i]) > max)
        {
            max = (width[i] * arr[i]);
        }
    }
    cout << "The Area of Histogram is:  " << max << endl;
    return 0;
}

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights)
    {

        int n = heights.size();

        // NSL
        vector<int> left;
        stack<pair<int, int>> st;
        int l = -1;

        for (int i = 0; i < n; i++)
        {
            while (!st.empty() && heights[i] <= st.top().first)
                st.pop();

            if (st.empty())
                left.push_back(l);
            else
                left.push_back(st.top().second);

            st.push({heights[i], i});
        }

        // NSR
        st = {};

        vector<int> right;
        int r = n;

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && heights[i] <= st.top().first)
                st.pop();

            if (st.empty())
                right.push_back(r);
            else
                right.push_back(st.top().second);

            st.push({heights[i], i});
        }

        reverse(right.begin(), right.end());

        int maxArea = 0;
        for (int i = 0; i < n; i++)
        {
            int width = right[i] - left[i] - 1;
            int area = width * heights[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};