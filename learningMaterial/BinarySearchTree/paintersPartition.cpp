// Problem
// n-length of n different bords
// m- painters available

// A painter paints 1 unit of board in 1 unit of time & each painter
// will paint consecutive boards.Find the minimum time that 
// will be required that will be required to paint all the bords

// Strategy
// Apply binary search for minimum & maximum possible values of 'min'
// length of boards to be painted

// check the feasible of this chosen value 


// checking feasibility
// Assign boards to each painter in a sequential manner ,whhile the
// current length of assigned bords doesn't exceed the value set by
// binary search

#include<iostream>
#include<algorithm>
using namespace std;

int findFeasible(int boards[], int n,int limit){
    int sum = 0 ,painters = 1;
    for (int i = 0; i < n; i++)
    {
        sum+= boards[i];
        if (sum>limit)
        {
            sum = boards[i];
            painters++;
        }
        
    }
    

}

int paintersPartition(int boards[], int n, int m){
    // calculate the total bords length
    int totalLength = 0, k = 0;
    for (int  i = 0; i < n; i++)
    {
        k=max(k,boards[i]);
        totalLength+=boards[i];
    }
    int low = k,high = totalLength;
    while (low<high)
    {
        int mid = (low + high)/2;
        int painters = findFeasible(boards,n,mid);
        if (painters<=m)
        {
            high = mid;
        }else{
            low = mid+1;
        }
        
    }
    return low;
    
}


int main(){

    int arr[] = {10,20,30,40};
    int n = 4;
    int m = 2;

    cout<< "Minimum time to paint boards: "<<paintersPartition(arr,n,m);
    cout<<endl;

    return 0;
}