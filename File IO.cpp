#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std; 


int main(){
    // string st = "This is string";
    // string st2;

    // ofstream out("sample.txt");
    // out<<"Initial string : "+st;

    // ifstream in("sample.txt");
    // in>>st2;

    // getline(in,st2);
    // cout<<st2;
    // out.close();
    // in.close();


    // ofstream out;
    // out.open("sample.txt");
    // out<<"This text is gonna write in the file\n";
    // out<<"This is 2nd line gonna in the file\n";
    // out.close();

    string str;
    ifstream in;
    in.open("sample.txt");

    while(in.eof()==0){
        getline(in,str);
        cout<<str<<endl;
    }

    return 0;
}