#include<stdio.h>
#include<iostream>
using namespace std; 


int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    try
    {
        if (age>=24)
        {
            cout<<"You can access the alcohol"<<endl;
        }
        else
        {
            throw (age); 
        }
    }
    catch(int age){
        cout<<"You cannot access alcohol as your age is less than 24"<<endl;
        cout<<"your age is :"<<age<<endl;
    }
    return 0;

// Example 2
    int num , denum , output;
    cout<<"Enter value for num and denum"<<endl;
    cin>>num;
    cin>>denum;
    try{
        if(denum==0){
            throw denum;
        }
        else {
            output = num/denum;
        }
    }
    catch(int denum){
        cout<<"you cann not enter denominator as 0 :"<<endl;
        cout<<"Value of denum is :"<<denum<<endl;
    }
    cout<<"Your Output is :"<<output<<endl;
}
