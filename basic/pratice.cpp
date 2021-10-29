#include <iostream>
using namespace std;


int addBinary(int a, int b){
    int ans =0;
    int prevCarry = 0;
    while (a>0 && b>0)
    {
        if (a%2 ==0 && b%2==0)
        {
            ans= ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;
    return 0;
}