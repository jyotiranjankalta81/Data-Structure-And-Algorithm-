// Given is an array with n elements that represents n positions along a 
// staight line .Find k elements such that the minimum distance between any 2
// elements is the maximum possible

// Approach 1
// find all possible subsets of size K & compare the minimum distance between 
// all of them
// but here time complexity is high

// Approach2
// 1.Sort the array for binary search technique
// Pick middle element as result & check for its feasibility
// 3.if feasible,search the right half of the array with larger minimum distance
// 4.else search the left half of the array

#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid,int arr[],int n, int k){
    int pos = arr[0],elements = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - pos>=mid)
        {
            pos = arr[i];
            elements++;
            if (elements == k)
            {
                return true;
            }
            
        }
        
    }
    return false;
}
int largestMinDistance(int arr[], int n, int k){
    sort(arr,arr+n);

    int result = -1;
    int left = 1, right = arr[n-1];
    while (left<right)
    {
        int mid = (left+right)/2;
        if (isFeasible(mid,arr,n,k))
        {
            result = max(result,mid);
            left = mid+1;
        }else{
            right = mid;

        }
        
    }

    return result;
    
}
int main(){

    int arr[] = {1,2,8,4,9};
    int n= 5;
    int k = 3;

    cout<<"Largest min distance is: "<<largestMinDistance(arr,n,k)<<endl;
    return 0;
}