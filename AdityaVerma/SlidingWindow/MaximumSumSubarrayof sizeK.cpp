//   int maximumSumSubarray(vector<int> &Arr , int N, int K){
//         int i = 0, j = 0, sum = 0, max_el = INT_MIN;
//         while (j < N) {
//             sum += Arr[j++];
//             if (j - i == K) {
//                 max_el = max(max_el, sum);
//                 sum -= Arr[i++];
//             }
//         }
//         return max_el;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    { // max of subarray of size k
        int n, k;
        cin >> n >> k; // size of array and subarray
        int a[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, j = 0, sum = 0;
        while (j < n)
        {
            if (j - i + 1 < k)
            {
                sum += a[j];
                j++;
            }
            else if (j - i + 1 == k)
            {
                sum += a[j];
                v.push_back(sum);
                sum -= a[i];
                i++;
                j++;
            }
        }
        cout << *max_element(v.begin(), v.end()) << endl; // for printing max of all k subarray of size k
    }
}