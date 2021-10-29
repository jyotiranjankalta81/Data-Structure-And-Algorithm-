// C++ program to print frequencies of all array
// elements in O(n) extra space and O(n) time
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to find counts of all elements present in
// arr[0..n-1]. The array elements must be range from
// 1 to n
// void findCounts(int *arr, int n)
// {
// 	//Hashmap
// 	int hash[n]={0};

// 	// Traverse all array elements
// 	int i = 0;
// 	while (i<n)
// 	{
// 		//update the frequency of array[i]
// 		hash[arr[i]-1]++;
		
// 		//increase the index
// 		i++;
// 	}

// 	printf("\nBelow are counts of all elements\n");
// 	for (int i=0; i<n; i++)
// 		printf("%d -> %d\n", i+1, hash[i]);
// }

// // Driver program to test above function
// int main()
// {
// 	int arr[] = {2, 3, 3, 2, 5};
// 	findCounts(arr, sizeof(arr)/ sizeof(arr[0]));

// 	int arr1[] = {1};
// 	findCounts(arr1, sizeof(arr1)/ sizeof(arr1[0]));

// 	int arr3[] = {4, 4, 4, 4};
// 	findCounts(arr3, sizeof(arr3)/ sizeof(arr3[0]));

// 	int arr2[] = {1, 3, 5, 7, 9, 1, 3, 5, 7, 9, 1};
// 	findCounts(arr2, sizeof(arr2)/ sizeof(arr2[0]));

// 	int arr4[] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
// 	findCounts(arr4, sizeof(arr4)/ sizeof(arr4[0]));

// 	int arr5[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
// 	findCounts(arr5, sizeof(arr5)/ sizeof(arr5[0]));

// 	int arr6[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// 	findCounts(arr6, sizeof(arr6)/ sizeof(arr6[0]));

// 	return 0;
// }
// CPP program to count frequencies of array items
// #include <bits/stdc++.h>
// #include<map>
#include<unordered_map>
using namespace std;

void countFreq(int arr[], int n)
{
	unordered_map<int, int> mp;

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	// To print elements according to first
	// occurrence, traverse array one more time
	// print frequencies of elements and mark
	// frequencies as -1 so that same element
	// is not printed multiple times.
	for (int i = 0; i < n; i++) {
	if (mp[arr[i]] != -1)
	{
		cout << arr[i] << " " << mp[arr[i]] << endl;
		mp[arr[i]] = -1;
	}
	}
}

int main()
{
	int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	countFreq(arr, n);
	return 0;
}

