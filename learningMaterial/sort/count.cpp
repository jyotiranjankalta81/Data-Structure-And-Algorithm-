#include <iostream>
// #include<bits/stdc++.h>
#include <algorithm>
using namespace std;

// find the count of every distinct element in the array
// calculate the position of each element in sorted array

void countSort(int arr[], int n)
{
    // first find the maximum element in the arr
    // store max element in k
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k, arr[i]);
    }

    // now create a count arr but we can't allocate dynamic memory to an array & initialize with one.
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // now modify the count arr
    for (int i = 1; i <= k; i++)
    {
        count[i] += count[i - 1];
    }

    // Declare a empty output arr
    int output[n];
    // now traverse the original arr from the last index
    for (int i = n - 1; i >= 0; i--)
    {
        // decremnt the value of count arr and store into the output arr.
        output[--count[arr[i]]] = arr[i];
    }

    // now put the output arr to original arr for decrese the memory
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

int main()
{
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    countSort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}