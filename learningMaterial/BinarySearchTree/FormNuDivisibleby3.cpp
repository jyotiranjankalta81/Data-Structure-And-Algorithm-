// For a given array and an integer K, check if any subarray of size k
// exist in the array such that elements in the subarray from a number
// divisible by 3

// compute the numbers formed by all possible subarrays of size k. check
// for their divisibility with 3.

// Time Complexity:O(N^2);
// Fact
// A number is divisible by 3 if and only if the sum of its digits is
// divisible by 3.

// Approach2(sliding Window)
// 1.sum of initial K element from the array 
// 2.Use sliding window technique and one by one,start substrating 
// elements from the end & adding from the end
// 3.At each step, check if sum divisible by 3 or not.if it is ,print the elements
// Time complexity:O(N);

#include<iostream>
#include<vector>
using namespace std;
void computeNumberFromSubarray(vector<int>arr, int k){
    // ans in pair two int value
    pair<int,int>ans;
    // we have declare a sum variable
    int sum = 0;
    // for starting k element calculate sum
    for (int  i = 0; i < k; i++)
    {
        sum +=arr[i];
    }
    // declare a boolean variable found that show we get our sum value or not

    bool found = false;
    // check our sum is available in first k or not
    if (sum%3 == 0)
    {
        ans = make_pair(0,k-1);
        found = true;
    }

    for (int j = k; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }
        // this represents sliding windows
        sum = sum + arr[j]-arr[j-k];

        // can we get after new sum value
        if (sum%3 ==0 )
        {
            ans = make_pair(j-k+1,j);
            found = true;
            
        }
        
        
    }
    // if ans is not exist
    if (!found)
    {
        ans = make_pair(-1,0);
    }
    if (ans.first == -1)
    {
        cout<<"No such subarray exists"<<endl;
    }
    else{
        for (int i = ans.first; i <= ans.second; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    
    
    
    
    


}

int main(){
    vector<int> arr = {84,23,45,12,56,82};
    int k = 3;
    computeNumberFromSubarray(arr,k);

    return 0;
}