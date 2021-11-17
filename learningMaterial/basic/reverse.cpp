#include <iostream>
using namespace std;
#include<math.h>

int main(){
    int n;
    cin>>n;
    // reverse a number

    // int reverse=0;
    // while (n>0)
    // {
    //     int lastdigit=n%10;
    //     reverse= reverse*10 + lastdigit;
    //     n=n/10;
    // }
    // cout<<reverse<<endl;

    int sum=0;
    int originaln=n;
    while (n>0)
    {
        int lasdigit=n%10;
        sum+= pow(lasdigit,3);
        n=n/10;
    }

    if (sum==originaln)
    {
        cout<<"Amstrong number"<<endl;
    }
    else{
        cout<<"Not amstrong "<<endl;
    }
    


    return 0;
}