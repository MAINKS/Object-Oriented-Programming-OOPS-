#include<stdio.h>
#include<iostream>
using namespace std; 

template <class T1 , class T2>

float average(T1 a ,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
template <class T>
int swapp(T &c , T &d){
    cout<< "before swapp: "<<c<<" and "<<d<<endl;
    T temp;
    temp = c;
    c = d;
    d = temp;
    cout<< "After swapp : "<<c<<" and "<<d<<endl;
}

int main(){
    float a;
    a = average(100,4.555);
    cout<<a<<endl;

    int x=5,y=4;
    swapp(x,y);
    // cout<<c<<endl;
}
