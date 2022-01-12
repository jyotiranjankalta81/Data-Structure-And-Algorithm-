#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int solve(vector<int> &A, const int &k)
{
    int n = A.size();
    int i = 0, j = 0, sum = 0;
    int mx = INT_MIN;
    while (j < n)
    {
        sum += A[j];
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            mx = max(mx, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum = sum - A[i];
                i++;
            }
            j++;
        }
    }
    return mx;
}
int main()
{
    vector<int> A{4, 1, 1, 1, 2, 3, 5};
    int k = 5;
    cout << solve(A, k);
    return 0;
}

// the logic is very similar to largest subarray with sum 0. In this code I'm storing sum upto certain point i into a map , now there are two cases
// 1) if the sum being calculated is equal to the sum asked , if so update the result variable with the current size of window which will be i+1 ,
// 2) if the sum is not equal to the sum asked we can search for the sum "k-sum" in the map. If that is present in the map then that means the remaining part will be k . Eg : if the sum given is 3 in an array [1,2,3]
// Then sum upto three will be 6, but I want 3. So I will search if the sum 6-3 was found before . If it was found then the remaining part will be the sum requested in this case 3.

//   int lenOfLongSubarr(int A[],  int n, int k)
//     {
//         // Complete the function
//         unordered_map<int,int> mp;
//         int sum = 0 , maxLength = 0;
//         for(int i = 0 ; i < n ; ++i ){
//             sum += A[i];
//             if(mp.find(sum) == mp.end()){
//                 mp[sum] = i;
//             }
//             if(mp.find(sum - k) != mp.end()){
//                 maxLength = max(maxLength , i - mp[sum - k]);
//             }
//             if(sum == k){
//                 maxLength = max(maxLength,i + 1);
//             }

//         }
//         return maxLength;
//     }