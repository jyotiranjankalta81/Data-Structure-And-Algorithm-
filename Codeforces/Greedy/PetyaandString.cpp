// using stl
#include <bits/stdc++.h>
// #include <iostream>
// #include <string>
// #include <algorithm>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    // for (int i = 0; i < s2.size(); i++)
    // {
    // s1= tolower(s1);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    // s2 = tolower(s2);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if (s1.compare(s2) == 0)
    {

        cout << 0 << endl;
    }
    // continue;
    else if (s1.compare(s2) > 0)
    {
        cout << 1 << endl;
    }
    else
        cout << -1 << endl;
    // }
    return 0;
}
// without using stl
#include <iostream>
using namespace std;
int main()
{

    string word1, word2;
    cin >> word1;
    cin >> word2;

    for (int i = 0; i < word1.size(); i++)
    {
        int letter1 = tolower(word1[i]);
        int letter2 = tolower(word2[i]);

        if (letter1 > letter2)
        {
            cout << 1;
            return 0;
        }
        else if (letter2 > letter1)
        {
            cout << -1;
            return 0;
        }
    }
    cout << 0;

    return 0;
}