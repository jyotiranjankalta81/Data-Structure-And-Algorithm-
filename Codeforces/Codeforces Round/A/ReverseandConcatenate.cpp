#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);
using namespace std;

int checkPalindrome(string str)
{
    // Calculating string length
    int len = str.length();

    // Traversing through the string
    // upto half its length
    for (int i = 0; i < len / 2; i++)
    {

        // Comparing i th character
        // from starting and len-i
        // th character from end
        if (str[i] != str[len - i - 1])
            return false;
    }

    // If the above loop doesn't return then it is
    // palindrome
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k;
        cin >> n;
        cin >> k;
        string str;
        cin >> str;
        if ((k == 0) || (checkPalindrome(str) == true))
        {
            cout << 1 << endl;
        }
        // else if (checkPalindrome(str)==true)
        // {
        //     cout<<1<<endl;
        // }
        else
        {
            /* code */
            cout << 2 << endl;
        }
    }
    return 0;
}