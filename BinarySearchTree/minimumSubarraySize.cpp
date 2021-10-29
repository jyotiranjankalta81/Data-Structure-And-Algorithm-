// For a given array and an integer X,find the minimum subarray
// size for which sum>x;

// Approach1
// Compute sum of all subarrays & check the condition
// Time Complexity:O(N^2);

// Approach2(sliding window)
// 1.Use variables ans,sum & start
// 2.Iterate over array & start adding elements to sum
// 3.if sum>x, remove elements from the start
// Time Complexity:O(N);

#include<iostream>
using namespace std;

int smallestSubarrayWithSum(int arr[], int n, int x){
    int sum = 0, minLength = n+1, start = 0, end = 0;
    while (end<n)
    {
        while (sum<= x && end <n)
        {
            sum += arr[end++];
        }
        while (sum>x && start<n)
        {
            if (end - start < minLength)
            {
                minLength = end- start;
            }
            sum -= arr[start++];
            
        }
        
    }

    return minLength;

    

}

int main(){

    int arr[] = {1,4,45,6,10,19};
    int x = 51;
    int n = 6;
    int minLength = smallestSubarrayWithSum(arr,n,x);
    if (minLength ==n+1)
    {
        cout<<" no such subarray exists"<<endl;
    }else{
        cout<<"smallest length subarray: "<<minLength<<endl;
    }
    


    return 0;
}

