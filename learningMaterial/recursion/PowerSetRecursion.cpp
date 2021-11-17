// You are given a string. You need to print the lexicographically sorted power-set of the string.
// Note: The string s contains lowercase letter of alphabet.

// { Driver Code Starts
//Initial Template for C++

// CPP program to generate power set
// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//Function to return the lexicographically sorted power-set of the string.
void solve(string &s, string ip, string op, vector<string> &v)
{

    if (ip.length() == 0)
    {
        v.push_back(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(s, ip, op1, v);
    solve(s, ip, op2, v);
}
vector<string> powerSet(string s)
{
    //Your code here
    vector<string> v;

    string ip = s;
    string op = "";
    solve(s, ip, op, v);
    return v;
}

// { Driver Code Starts.

// Driver code
int main()
{
    // int T;
    // cin>>T;//testcases
    // while(T--)
    // {
    string s;
    cin >> s; //input string

    //calling powerSet() function
    vector<string> ans = powerSet(s);

    //sorting the result of the powerSet() function
    sort(ans.begin(), ans.end());

    //printing the result
    for (auto x : ans)
        cout << x << " ";
    cout << endl;

    // }

    return 0;
} // } Driver Code Ends