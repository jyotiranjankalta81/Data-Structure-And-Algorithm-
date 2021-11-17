// For a given array and an integer K,find the maximum perfect numbers
// in a subarrays of size k

// Perfect Number
// Perfect number is a number if it is equal to the sum of its proper divisors 
// (positive divisors) except for the number itself

// Approach 1
// Generate all subarrays of size K & count number of perfect numbers 
// Time Complexity:O(N*K);

// Trick
// Convert the given array into a binary array with values 0 & 1 only

// Approach 2
// Sliding Windows
// Traverse the array & if the number at index i is a perfect number then
// replace value at ith index with '1', else with a'0'.

// 1.Initialize a variable to store sum of divisors
// 2.Traverse every number less than arr[i] and add it to sum if it is a 
// divisor of arr[i]
// 3.if the sum of all the divisors is equAL TO arr[i], then only the number is 
// perfect number

// Find the maximum sum of a subarray from all possible subarrays of size K.
// Time Comlexity:O(N*srrt(N));
// #include<iostream>
// #include<cmath>
// using namespace std;

// int maxSum(int arr[],int n, int k){
//     if (n<k)
//     {
//         cout<<" Invalid values"<<endl;
//         return -1;
//     }

//     int res = 0;
//     for (int i = 0; i <k; i++)
//     {
//         res+=arr[i];
//     }
//     int sum = res;
//     for (int i = 0; i < n; i++)
//     {
//         sum +=arr[i] - arr[i-k];
//         res = max(res,sum); 
//     }

//     return res;
// }

// bool isNumberPerfect(int n){
//     int sum =1;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n%i ==  0)
//         {
//             if (i == n/i)
//             {
//                 sum += i;
//             }else{
//                 sum +=i+n/i;
//             }
            
//         }
        
//     }
//     if (sum == n && n!=1)
//     {
//         return true;
//     }
//     return false;
    
    
// }


// int maxNumberOfPerfect(int arr[], int n, int k){
//     for (int i = 0; i < n; i++)
//     {
//         if (isNumberPerfect(arr[i]))
//         {
//             arr[i]=1;
//         }
//         else{
//             arr[i]= 0;
//         }
        
//     }return maxSum(arr,n,k);
    
// }


// int main(){

//     int arr[]={28,2,3,6,496,99,8128,24};
//     int k = 4;
//     int n = 8;
//     cout<<maxNumberOfPerfect(arr,n,k)<<endl;
//     return 0;
// }

// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to check a number
// is Perfect Number or not
int isPerfect(int N)
{
	// Stores sum of divisors
	int sum = 1;

	// Find all divisors and add them
	for (int i = 2; i < sqrt(N); i++)
	{

		if (N % i == 0) {

			if (i == N / i)
			{

				sum += i;
			}
			else
			{

				sum += i + N / i;
			}
		}
	}

	// If sum of divisors
	// is equal to N
	if (sum == N && N != 1)
		return 1;

	return 0;
}

// Function to return maximum
// sum of a subarray of size K
int maxSum(int arr[], int N, int K)
{
	// If k is greater than N
	if (N < K)
	{

		cout << "Invalid";
		return -1;
	}

	// Compute sum of first window of size K
	int res = 0;
	for (int i = 0; i < K; i++)
	{

		res += arr[i];
	}

	// Compute sums of remaining windows by
	// removing first element of previous
	// window and adding last element of
	// current window
	int curr_sum = res;
	for (int i = K; i < N; i++)
	{

		curr_sum += arr[i] - arr[i - K];
		res = max(res, curr_sum);
	}

	// return the answer
	return res;
}

// Function to find all the
// perfect numbers in the array
int max_PerfectNumbers(int arr[], int N, int K)
{
	// The given array is converted into binary array
	for (int i = 0; i < N; i++)
	{

		arr[i] = isPerfect(arr[i]) ? 1 : 0;
	}

	return maxSum(arr, N, K);
}

// Driver Code
int main()
{
	int arr[] = { 28, 2, 3, 6, 496, 99, 8128, 24 };
	int K = 4;
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << max_PerfectNumbers(arr, N, K);

	return 0;
}

