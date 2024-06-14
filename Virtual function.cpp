#include<stdio.h>
#include<iostream>
using namespace std; 

class baseclass{
    public:
    int var_base=100;
    virtual void display(){
        cout<<"The value of base class variable is :"<<var_base<<endl;
    }
 
};

class derivedclass: public baseclass{
    public:
    int var_derived=200;
    void display(){
        cout<<"The value of base class variable is :"<<var_derived<<endl;
    }
};

int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_der;
    base_class_pointer = &obj_der;
    base_class_pointer->display();
}

