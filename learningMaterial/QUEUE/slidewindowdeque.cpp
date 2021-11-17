#include <iostream>
#include <deque>

// using namespace std;

// void showdq(deque <int> g)
// {
// 	deque <int> :: iterator it;
// 	for (it = g.begin(); it != g.end(); ++it)
// 		cout << '\t' << *it;
// 	cout << '\n';
// }

// int main()
// {
// 	deque <int> gquiz;
// 	gquiz.push_back(10);
// 	gquiz.push_front(20);
// 	gquiz.push_back(30);
// 	gquiz.push_front(15);
// 	cout << "The deque gquiz is : ";
// 	showdq(gquiz);

// 	cout << "\ngquiz.size() : " << gquiz.size();
// 	cout << "\ngquiz.max_size() : " << gquiz.max_size();

// 	cout << "\ngquiz.at(2) : " << gquiz.at(2);
// 	cout << "\ngquiz.front() : " << gquiz.front();
// 	cout << "\ngquiz.back() : " << gquiz.back();

// 	cout << "\ngquiz.pop_front() : ";
// 	gquiz.pop_front();
// 	showdq(gquiz);

// 	cout << "\ngquiz.pop_back() : ";
// 	gquiz.pop_back();
// 	showdq(gquiz);

// 	return 0;
// }

// C++ Program to find the maximum for
// each and every contiguous subarray of size k.
// #include <bits/stdc++.h>
using namespace std;

// Method to find the maximum for each
// and every contiguous subarray of size k.
// void printKMax(int arr[], int n, int k)
// {
// 	int j, max;

// 	for (int i = 0; i <= n - k; i++)
// 	{
// 		max = arr[i];

// 		for (j = 1; j < k; j++)
// 		{
// 			if (arr[i + j] > max)
// 				max = arr[i + j];
// 		}
// 		cout << max << " ";
// 	}
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	int k = 3;
// 	printKMax(arr, n, k);
// 	return 0;
// }

// This code is contributed by rathbhupendra

// CPP program for the above approach
// #include <bits/stdc++.h>
using namespace std;

// A Dequeue (Double ended queue) based
// method for printing maximum element of
// all subarrays of size k
void printKMax(int arr[], int n, int k)
{
	
	// Create a Double Ended Queue,
	// Qi that will store indexes
	// of array elements
	// The queue will store indexes
	// of useful elements in every
	// window and it will
	// maintain decreasing order of
	// values from front to rear in Qi, i.e.,
	// arr[Qi.front[]] to arr[Qi.rear()]
	// are sorted in decreasing order
	std::deque<int> Qi(k);

	/* Process first k (or first window)
	elements of array */
	int i;
	for (i = 0; i < k; ++i)
	{
	
		// For every element, the previous
		// smaller elements are useless so
		// remove them from Qi
		while ((!Qi.empty()) && arr[i] >=
							arr[Qi.back()])
			
			// Remove from rear
			Qi.pop_back();

		// Add new element at rear of queue
		Qi.push_back(i);
	}

	// Process rest of the elements,
	// i.e., from arr[k] to arr[n-1]
	for (; i < n; ++i)
	{
	
		// The element at the front of
		// the queue is the largest element of
		// previous window, so print it
		cout << arr[Qi.front()] << " ";

		// Remove the elements which
		// are out of this window
		while ((!Qi.empty()) && Qi.front() <=
										i - k)
			
			// Remove from front of queue
			Qi.pop_front();

		// Remove all elements
		// smaller than the currently
		// being added element (remove
		// useless elements)
		while ((!Qi.empty()) && arr[i] >=
							arr[Qi.back()])
			Qi.pop_back();

		// Add current element at the rear of Qi
		Qi.push_back(i);
	}

	// Print the maximum element
	// of last window
	cout << arr[Qi.front()];
}

// Driver code
int main()
{
	int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printKMax(arr, n, k);
	return 0;
}


