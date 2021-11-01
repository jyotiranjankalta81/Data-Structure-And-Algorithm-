
// #include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve(string ip, string op)
{
    if (ip == "")
    {
        cout << op << "\n";
        return;
    }
    string op1 = op, op2 = op;
    op1.push_back((char)toupper(ip[0]));
    op2.push_back(ip[0]);
    ip.erase(0, 1);
    solve(ip, op1);
    solve(ip, op2);
}

int main()
{
    string ip = "", op = "";
    cin >> ip;
    string flush = "";
    for (int i = 0; i < ip.length(); i++)
    {
        flush += (char)tolower(ip[i]);
    }
    ip = flush;
    solve(ip, op);
    return 0;
}