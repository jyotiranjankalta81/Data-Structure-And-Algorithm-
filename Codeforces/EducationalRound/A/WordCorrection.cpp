#include <bits/stdc++.h>
using namespace std;

bool vowel(char c)
{
    switch (c)
    {
    // check for capitalized forms as well.
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
    default:
        return false;
    }
}

int main()
{
    int n;
    string s;
    // string s1;
    cin >> n >> s;
    for (int i = 0; i <= n - 1; i++)
    {
        if (!vowel(s[i]) || !vowel(s[i - 1]))
        {
            cout << s[i];
        }
    }
    return 0;
}
