// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void swap(char *x, char *y)
// {
//     char temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int i;
//     for (int j = 0; j < s.length() / 2; j++)
//         for (i = 0; i < s.length() - 2; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (s[i] > s[i + 2])
//                     swap(&s[i], &s[i + 2]);
//             }
//         }

//     cout << s;
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> temp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
            temp.push_back(s[i]);
    }
    sort(temp.begin(), temp.end());
    for (int i = 0; i < temp.size() - 1; i++)
    {
        cout << temp[i] << "+";
    }
    cout << temp[temp.size() - 1];
    return 0;
}