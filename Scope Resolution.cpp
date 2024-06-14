#include<stdio.h>
#include<iostream>
using namespace std; 

int c = 34;

int main(){
    int a,b;
    cout<<"enter a :"<<endl;
    cin>>a;
    cout<<"enter b :"<<endl;
    cin>>b;
    cout << " the value of sum is :"<<::c <<endl;
    ::c=a+b;
    cout << " the value of sum is :"<<c <<endl;
    // cout << " the value of sum is :"<<::c <<endl;
}
