// Given an array and a value, find if there is a triplet in array
// whose sum is equal to the given value.If there is such a triplet
// present in array, then print the triplet and return true.Else 
// return false.

// Input: array = {12, 3, 4, 1, 6, 9}, sum = 24;
// Output: 12, 3, 9
// Explanation: There is a triplet (12, 3 and 9) present
// in the array whose sum is 24. 
// Input: array = {1, 2, 3, 4, 5}, sum = 9
// Output: 5, 3, 1
// Explanation: There is a triplet (5, 3 and 1) present 
// in the array whose sum is 9. 

// BruteForce
// Try out all the combinations.
// for (int i = 0; i < n; i++)
// {
//     for (int j = i+1; j < n; j++)
//     {
//         for (int k=j+1; k<n; k++ )
//         {
//             if (arr[i]+arr[j]+arr[k]==target)
//             {
//                 found =true;
//             }
            
//         }
        
//     }
    
// }
// time complexity:O(N^3)

// C++ program to find a triplet
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
// #include
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
	int l, r;

	/* Sort the elements */
	sort(A, A + arr_size);

	/* Now fix the first element one by one and find the
	other two elements */
	for (int i = 0; i < arr_size - 2; i++) {

		// To find the other two elements, start two index
		// variables from two corners of the array and move
		// them toward each other
		l = i + 1; // index of the first element in the
		// remaining elements

		r = arr_size - 1; // index of the last element
		while (l < r) {
			if (A[i] + A[l] + A[r] == sum) {
				printf("Triplet is %d, %d, %d", A[i],
					A[l], A[r]);
				return true;
			}
			else if (A[i] + A[l] + A[r] < sum)
				l++;
			else // A[i] + A[l] + A[r] > sum
				r--;
		}
	}

	// If we reach here, then no triplet was found
	return false;
}

/* Driver program to test above function */
int main()
{
	int A[] = { 1, 4, 45, 6, 10, 8 };
    // int A[];
    // cin>> A;
    // int sum;
    // cin>>sum;
	int sum = 22;
    // int A[];
    // int arr_size;
    // int sum;
	int arr_size = sizeof(A) / sizeof(A[0]);

	find3Numbers(A, arr_size, sum);

	return 0;
}

