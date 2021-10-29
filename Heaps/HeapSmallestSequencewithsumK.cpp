// Subarray:Continuuous Block of Elements
// Sebsequence:Not necessarity Continuuous, but order should remain as in original array
// Every Subarray is Sebsequence but not vice versa
// Approach
// 1.Keep a maximum and insert all the elements
// 2.keep popping the elelements and keep adding them to a variable sum and
// maintain cnt.
// 3.when sum>=k, then quote the answer(cnt).
// C++ program to maximize the sum of K elements
// in the array by taking only corner elements

#include <bits/stdc++.h>
using namespace std;

// Function to return maximum sum
int maxPointCount(int arr[], int K, int size)
{
	// Initialse variables
	int curr_points = 0;
	int max_points = 0;

	// Iterate over first K elements of array
	// and update the value for curr_points
	for (int i = 0; i < K; i++)
		curr_points += arr[i];

	// Update value for max_points
	max_points = curr_points;

	// j points to the end of the array
	int j = size - 1;

	for (int i = K - 1; i >= 0; i--) {

		curr_points = curr_points
					+ arr[j] - arr[i];
		max_points = max(curr_points,
						max_points);
		j--;
	}

	// Return the final result
	return max_points;
}

// Driver code
int main()
{
	int arr[] = { 8, 4, 4, 8, 12, 3, 2, 9 };
	int K = 3;
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxPointCount(arr, K, n);

	return 0;
}
