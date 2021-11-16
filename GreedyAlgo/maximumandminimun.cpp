// You are given an array, A, of n elements.you have to remove exactly
// n/2 elements from array A and add it to another array B (initially empty).
// Find the maximum and minimum values of differences between these two arrays.
// we define the difference between these two arrays as:
// Σabs(A[i] - B[i])
// Idea:-
// To MAximise abs(A[i] - A[j])
// 1.A[i] should be as large as possible.
// 2.A[j] should be as small as possible.

// For a sorted array,
// Maximum diff = (A[n-1] - A[0]) + (A[n-2]-A[1])...A[n/2] - A[n/2-1]
// =(A[n-1] + A[n-2]...A[n-2]) - (A[0] + A[1] ...A[n/2-1])

// To Minimise abs(A[i] - A[j])
// 1.The difference should between A[i] ans A[j] should be similar
// For a sorted array,
// Minimum diff = A[1] - A[0] + A[3] -A[2] ...
// =(sum of odd elements) - (sum of even elements)

#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int32_t main()
{
    int n;
    cin >> n;
    // declare a n size vector
    vector<int> a(n);
    // take the input of n size vector
    for (auto &i : a)
    {
        cin >> i;
    }

    // sort the array in incresing order
    sort(a.begin(), a.end());

    // declare the return of min and max
    long long mn = 0, mx = 0;

    // traverse arr from 0 to n/2
    for (int i = 0; i < n / 2; i++)
    {
        // Maximun diff=(A[n-1] - A[0]) + (A[n-2] - A[1])......(A[n/2] - A[n/2-1])
        // (A[n-1] + A[n-2]....A[n/2]) - (A[0] + A[1]...A[n/2-1])
        mx += (a[i + n / 2] - a[i]);
        // minimum diff=(sum of odd elements) - (sum of even elements)
        mn += (a[2 * i + 1] - a[2 * i]);
    }

    cout << mn << " " << mx;
}