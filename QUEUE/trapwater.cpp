// C++ implementation of the approach
// #include<bits/stdc++.h>

// Height  | 0 1 0 2 1 0 1 3 2 1 2 1
// R max   | 3 3 3 3 3 3 3 3 2 2 2 -
// L max   | - 0 1 2 2 2 2 3 3 3 3 3 3 
// min(R,L)| 0 0 1 2 2 2 3 2 2 2 0
// Ans= 0 0 1 0 1 2 1 0 0 1 0 0 
// Adding max(min(L,R)-Height[i],0) to the answer

#include<iostream>
#include<math.h>
#include<algorithm>
#include<stack>
using namespace std;

// C++ implementation of the approach
// #include <bits/stdc++.h>
using namespace std;

// Function to return the maximum
// water that can be stored
int maxWater(int height[], int n)
{
	
	// Stores the indices of the bars
	stack <int> st;

	// Stores the final result
	int ans = 0;

	// Loop through the each bar
	for(int i = 0; i < n; i++)
	{
		
		// Remove bars from the stack
		// until the condition holds
		while ((!st.empty()) &&
			(height[st.top()] < height[i]))
		{
			
			// Store the height of the top
			// and pop it.
			int pop_height = height[st.top()];
			st.pop();

			// If the stack does not have any
			// bars or the the popped bar
			// has no left boundary
			if (st.empty())
				break;

			// Get the distance between the
			// left and right boundary of
			// popped bar
			int distance = i - st.top() - 1;

			// Calculate the min. height
			int min_height = min(height[st.top()],
								height[i]) -
							pop_height;

			ans += distance * min_height;
		}

		// If the stack is either empty or
		// height of the current bar is less than
		// or equal to the top bar of stack
		st.push(i);
	}
	return ans;
}

// Driver code
int main()
{
	
	int arr[] = { 0, 1, 0, 2, 1, 0,
				1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << maxWater(arr, n);

	return 0;
}

// The code is contributed by Soumitri Chattopadhyay

