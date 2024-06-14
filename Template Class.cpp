#include<stdio.h>
#include<iostream>
using namespace std; 

template<class T1, class T2, class T3>

 class myclass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    myclass(T1 a,T2 b,T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(){
        cout<<data1<<endl<<data2<<endl<<data3<<endl;
    }
 };

 int main(){
    myclass<int,float,char>obj(4,1.8,'S');
    myclass <char,int,char> obj2('s',1,'d');
    obj.display();
    obj2.display();
    return 0;

 }