// C++ Program to find whether a
// no is power of two
#include <bits/stdc++.h>
using namespace std;

// Function to check if x is power of 2
bool isPowerOfTwo(long long n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

// Driver program
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        // isPowerOfTwo(64)? cout<<"Yes"<<endl: cout<<"No"<<endl;
        // i have just reverse the above function
        isPowerOfTwo(n) ? cout << "No" << endl : cout << "YES" << endl;
    }

    return 0;
}
