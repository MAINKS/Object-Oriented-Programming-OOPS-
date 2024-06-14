#include<stdio.h>
#include<iostream>
using namespace std; 

class Complex{
    private:
    int real , imag;
    public:

    Complex(int r , int i){
        real = r;
        imag = i;
    };
    void display(void){
        cout<<real<<"+"<<imag<<"i"<<endl;
    };

    Complex operator +(Complex c){
        Complex temp;
        temp.real = real+c.real;
        temp.imag = imag+c.imag;
        return temp;
        
    }

};


int main(){
    Complex c1(5,4);
    Complex c2(3,4);
    Complex c3(1,1);
    c3=c1+c2;
    c3.display();
    
}