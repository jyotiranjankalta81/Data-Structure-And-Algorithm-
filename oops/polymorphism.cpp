#include<iostream>
using namespace std;

// function Overloading Apnacollege
// class ApnaCollege{
//     public:
//     void fun(){
//         cout<<" I am a function with no arguments"<<endl;
//     }
//     void fun(int x){
//         cout<<" I am a function with int arguments"<<endl;
//     }
//     void fun(double x){
//         cout<<" I am a function with double arguments"<<endl;
//     }
// };

// operator Overloading
class Complex{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    Complex operator +(Complex const &obj){
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display(){
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main(){
    // // function overiding
    // ApnaCollege obj;
    // obj.fun();
    // obj.fun(4);
    // obj.fun(6.2);

    // operator overiding
    Complex c1(12.7);
    Complex c2(6,7);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}