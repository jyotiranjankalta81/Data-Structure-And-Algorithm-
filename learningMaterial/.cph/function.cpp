#include <iostream>
#include <math.h>
using namespace std;

// bool isPrime(int num){
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num%i==0)
//         {
//             return false;
//         }

//     }
//     return true;

// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout<<i<<endl;

//         }

//     }

//     return 0;
// }

// fibonacci number
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextTerm;

//     for (int i = 1; i <=n; i++)
//     {
//         cout<<t1<<endl;
//         nextTerm=t1+t2;
//         t1=t2;
//         t2=nextTerm;
//     }
//     return;

// }

// int main(){

//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }

// factorial number
// int fact(int n)
// {
//     int factorial = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = fact(n);
//     cout << ans << endl;
//     return 0;
// }
// calculate the value nCr
// int main(){
//     int n,r;
//     cin >>n>>r;
//     int ans = fact(n)/(fact(n-r)*fact(r));
//     cout<<ans<<endl;
//     return 0;
// }
