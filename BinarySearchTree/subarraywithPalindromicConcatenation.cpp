// Subarray of size K with Palindromic concatenation
// words that are spelled the same from forward as well as backward
// For a given array and an integer K,check if any subarray of size Kexist in 
// the array such that concatenation of elements from a palindrome 

// Approach 1
// Generate all subarrays of size K
// Time complexity:(O^2);


// Check if their concatenation forms a pallindrome Time Complexity:O(N);
// Approach2
// 1.Store concatenation of initial K elements
// 2.Iterate over the array & start deleting elements from the start and adding
// elements from the end
// 3.At each step, check if concatenation is a palindrome
// Time Complexity:O(N^2);
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPalindrome(int n){
    int temp = n,number = 0;
    while (temp>0)
    {
        number = number*10 + temp%10;
        temp = temp/10;
    }
    if (number == n)
    {
        return true;
    }
    return false;
    
    
}
int findPalindromicSubarray(vector<int>arr, int k){
    int num = 0;


    for (int  i = 0; i < k; i++)
    {
        num = num*10 + arr[i];

    }

    if (isPalindrome(num))
    {
        return 0;
    }

    for (int j = k; j < arr.size(); j++)
    {
        num = (num %(int)pow(10,k-1))*10 + arr[j];

        if (isPalindrome(num))
        {
            return j-k+1;
        }
        
    }
    return -1;
}




int main(){

    vector<int> arr = {2,3,5,1,1,5};
    int k = 4;
    int ans = findPalindromicSubarray(arr,k);
    if (ans == -1)
    {
        cout<<"Palindromic subarray not exist"<<endl;
    }
    else{
        for (int i = ans; i <ans+k; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}