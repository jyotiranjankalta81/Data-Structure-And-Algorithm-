
#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
    sort(str.begin(), str.end());
    cout << str << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        // cout << sort(s.begin(), s.end());
        // cout << endl;
        sortString(s);
    }

    return 0;
}
