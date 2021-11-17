#include<iostream>
using namespace std;


// write a program to count the number of one in binary representation of a number
// int numberofones(int n){
//     int count = 0;
//     while(n){
//         n=n & (n-1);
//         count++;
//     }
//     return count;
// }

// int main(){
//     cout<<numberofones(19)<<endl;
//     return 0;
// }


// write a program to generate all possible subsets of a set {a,b,c}
// {},{a},{b},{c},{a,b},{a,c},{b,c},{a,b,c}
// void subsets(int arr[], int n){
//     for (int i = 0; i <(1<<n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i & (1<<j))
//             {
//                 cout<<arr[j]<<" ";
//             }
            
//         }cout<<endl;
        
//     }
    
// }

// int main(){
//     int arr[4] = {1,2,3,4};
//     subsets(arr,4);
//     return 0;
// }


// write a program to find a unique number in an array where all numbers except one are present twice
// {2,4,6,3,4,6,2}
// int unique(int arr[], int n){
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum^arr[i];
//     }
//     return xorsum;
    
// }

// int main(){
//     int arr[]={1,2,3,4,1,2,3};
//     cout<<unique(arr,7)<<endl;

//     return 0;
// }

// write a program to find the 2 unique no in an array where all number except two , are present twice
// {2,4,6,7,4,5,6,2}
// int setBit(int n, int pos){
//     return((n & (1<<pos))!=0);
// }

// void unique(int arr[], int n){
//     int xorsum=0;
//     for(int i=0; i<n; i++){
//         xorsum = xorsum^arr[i];
//     }
//     int tempxor = xorsum;
//     int setbit=0;
//     int pos=0;
//     while (setbit!=1)
//     {
//         setbit = xorsum & 1;
//         pos++;
//         xorsum = xorsum >>1;
//     }

//     int newxor=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(arr[i],pos-1))
//         {

//             newxor=newxor^arr[i];
//         }
        
//     }

//     cout<<newxor<<endl;
//     cout<<(tempxor^newxor)<<endl;
    
    
// }

// int main(){

//     int arr[]={1,2,3,1,2,3,5,7};
//     unique(arr,8);
//     return 0;

// }


// write a program to find a unique number in an array where all numbers execept one,are present thrice
// {1,3,2,3,4,2,1,1,3,2}
bool getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
bool setBit(int n, int pos){
    return (n | (1<<pos));
}
int unique(int arr[], int n){
    int result = 0;
    for (int i = 0; i < 64; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j],i))
            {
                sum++;
            }
            
        }
        if (sum%3!=0)
        {
            result = setBit(result,i);
        }
        
        
    }
    return result;
    
}

int main(){
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;
}





















