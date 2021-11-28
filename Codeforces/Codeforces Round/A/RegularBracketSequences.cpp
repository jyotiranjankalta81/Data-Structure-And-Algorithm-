// //c++ program to print all the combinations of balanced parenthesis

// #include <bits/stdc++.h>
// using namespace std;
// vector<string> generateParenthesis(int n)
// {
//     vector<string> two;
//     vector<string> ans;
//     if (n == 1)
//     {
//         two.push_back("{}");
//         return two;
//     } //Returning vector if n==1
//     if (n == 2)
//     {
//         two.push_back("{{}}");
//         two.push_back("{}{}");
//         return two;
//     } //Returning vector if n==2, as these are base cases

//     two = generateParenthesis(n - 1); //Recursively calling the function

//     // Assigning the previous values of vector into the present function
//     for (int i = 0; i < two.size(); i++)
//     {
//         string buf = "{", bug = "{", bus = "{";
//         buf = buf + two[i] + "}";
//         bug = bug + "}" + two[i];
//         bus = two[i] + bus + "}";
//         ans.push_back(buf);
//         ans.push_back(bus);
//         ans.push_back(bug);
//     }

//     // Removing the duplicate as kind of this {}{} remains same in either way
//     ans.pop_back();

//     return ans;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<string> ff; //Vector to store all the combinations
//         // int n = 2;
//         ff = generateParenthesis(n); //Calling the function

//         for (int i = 0; i < ff.size(); ++i)
//         {
//             cout << ff[i] << endl; //Print all the combinations
//                                    /* code */
//         }
//     }
// }

#include <iostream>
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
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }
void printarr(ll arr[], ll n)
{
    fl(i, n) cout << arr[i] << " ";
    cout << "\n";
}
string decToBinary(int n)
{
    string s = "";
    int i = 0;
    while (n > 0)
    {
        s = to_string(n % 2) + s;
        n = n / 2;
        i++;
    }
    return s;
}
ll binaryToDecimal(string n)
{
    string num = n;
    ll dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
    return dec_value;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
//Code by Abhinav Awasthi
//Language C++
//Practice->Success
int binarySearch(ll arr[], ll l, ll r, ll x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was
    // not present
    return -1;
}
void pr(ll n)
{
    fl(i, n)
    {
        cout << "(";
    }
    fl(i, n)
    {
        cout << ")";
    }
}
void asquare()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        pr(i);
        pr(n - i);
        cout << "\n";
    }
}
int main()
{
    Code By Asquare
        ll t;
    cin >> t;
    fl(iiii, t)
    {
        asquare();
    }
    return 0;
}