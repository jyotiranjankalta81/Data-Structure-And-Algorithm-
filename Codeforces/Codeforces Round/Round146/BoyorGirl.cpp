#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void uniqueCharacter(string s)
{

    unordered_map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }

    // return m.size();
    if (m.size() % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    string s;
    cin >> s;
    uniqueCharacter(s);
    // }wj
    return 0;
}