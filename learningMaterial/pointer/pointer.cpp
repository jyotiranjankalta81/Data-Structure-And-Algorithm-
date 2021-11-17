#include<iostream>
using namespace std;
int main(){
    // int a=10;
    // int* aptr = &a;

    // cout<<*aptr<<endl;
    // *aptr=20;
    // cout<<a<<endl;

    // pointer array
    int arr[]={10,20,30};
    // cout<<*arr<<endl;

    int *ptr=arr;
    for (int i = 0; i < 3; i++)
    {
        // cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        // ptr++;
    }
    

    return 0;
}