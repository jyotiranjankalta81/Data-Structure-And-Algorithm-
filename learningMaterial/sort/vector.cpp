
// for more details on vector and pair refer the http://www.cplusplus.com/reference/vector/vector/?kw=vector

#include <iostream>
#include <vector>
#include <algorithm>
// #include<bits/stdc++.h>
using namespace std;

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<endl;
//     }

// iterator
//     vector<int>::iterator it;
//     for (it= v.begin(); it!=v.end(); it++)
//     {
//         cout<<*it<<endl;
//     }

// for each
//     for (auto element:v)
//     {
//         cout<<element<<endl;
//     }

//     v.pop_back();
//     vector<int>v2 (3,50);
//     swap(v,v2);
//     for (auto element:v)
//     {
//         cout<<element<<endl;
//     }
//     for (auto element:v2)
//     {
//         cout<<element<<endl;
//     }

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> v;

    for (int i = 0; i < (sizeof(arr) / sizeof(0)); i++)
    {
        // pair<int,int>p;
        // p.first=arr[i];
        // p.second=arr[]
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}