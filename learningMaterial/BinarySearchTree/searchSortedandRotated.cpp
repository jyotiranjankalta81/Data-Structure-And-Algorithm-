// Search element in sorted and roteted array
// We are given an ascending sorted array that has been rotated from
// a pivot point (unknown to us) and an element X.Search for x in the 
// array with complexity less than that of linear search

// strategy
// Find the pivot Points
// Apply binary search in left half 
// Apply binary search in righ half

// finding the pivot point
// only element that will be greater than its next element i.e
// arr[i]>arr[i+1], i<= n-1;

// search Left & Right halves
// Use Binary Search

#include<iostream>
using namespace std;


int searchInRotatedArray(int arr[],int key,int left,int right){
    if (left>right)
    {
        return -1;
    }
    int mid = (left+right)/2;
    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[left]<= arr[mid])
    {
        if (key>= arr[left] && key<=arr[mid])
        {
            return searchInRotatedArray(arr,key,left,mid-1);
        }
        return searchInRotatedArray(arr,key,mid+1,right);
        
    }
    if (key>= arr[mid] && key <= arr[right])
    {
        return searchInRotatedArray(arr,key,mid+1,right);
    }
    return searchInRotatedArray(arr,key,left,mid-1);
    
    
    
    
}

int main(){
    int arr[]={6,7,8,9,10,1,2,5};
    int n = 8;
    int key = 8;
    int idx = searchInRotatedArray(arr,key,0,n-1);
    if (idx == -1)
    {
        cout<<" Key doesn't exist"<<endl;
    }
    else{
        cout<<"Key is present at idx: "<<idx<<endl;
    }
    


    return 0;
}