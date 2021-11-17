#include<iostream>
using namespace std;

void countSort(int arr[], int n){
    int k=arr[0];
    for (int i = 0; i < n; i++)
    {
        k=max(k,arr[i]);
    }
    
}

int main(){

    int arr[]= {1,3,2,3,4,1,6,4,2};
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    

}