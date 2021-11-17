#include <iostream>
using namespace std;

// int Sum(int n){
//     if (n==0)
//     {
//         return 0;
//     }
//     int prevSum=Sum(n-1);
//     return n + prevSum;
// }

// find the Power of a number
// int power(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     int prevPower = power(n, p - 1);
//     return n * prevPower;
// }

// find the factorial of a number
// int Factorial(int n){
//     if (n==0)
//     {
//         return 1;
//     }
//     int prevfact = Factorial(n-1);
//     return n*prevfact;
// }

// Print the nth Fibonacci number 
// int fib(int n){
//     if (n==0 || n==1)    //base case
//     {
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// sorting a array
// bool sort(int arr[], int n){
//     if (n==1)
//     {
//         return true;
//     }
//     bool restArray = sort(arr+1, n-1);
//     return(arr[0]<arr[1] && restArray);
// }

// print the number in decresing order
// void dec(int n){
//     if (n==0)
//     {
//         return;
//     }
//     cout<<n<<endl;
//     dec(n-1);
// }

 // check occurance of a number
 // int firstocc(int arr[], int n, int i, int key){
 //     if (i==n)
 //     {
 //         return -1;
 //     }
 //     if (arr[i]==key)
 //     {
 //         return i;
 //     }
 //     return firstocc(arr,n,i+1, key);
 // }

int main()
{
    // sum of a number 
    // int n;
    // cin>>n;
    // cout<<Sum(n);

    // power of a number
    // int n,p;
    // cin>>n>>p;
    // cout<<power(n,p)<<endl;

    // Factorial of a number
    // int n;
    // cin>>n;
    // cout<<Factorial(n);

    // fibonaci of a number
    // int n;
    // cin>>n;
    // cout<<fib(n)<<endl;

    // sortig a array
    // int arr[]={1,2,3,4,5};
    // cout<<sort(arr,5)<<endl;

    // print no in decresing order
    // int n;
    // cin>>n;
    // dec(n);

    //  int arr[]={4,2,1,2,5,2,7};
    //  cout<<firstocc(arr,7,0,2)<<endl;
    //  cout << sort(arr,5) << endl;
    return 0;
}