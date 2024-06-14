#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<*(ptr+4)<<endl;
    float * pointer = new float(13.344); //(new keyord)//
    cout<<"value in pointer is :" <<pointer<<endl;
    cout<<"value at address of  pointer is :" <<*(pointer)<<endl;
    return 0;
}