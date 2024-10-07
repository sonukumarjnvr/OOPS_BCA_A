#include<bits/stdc++.h>
using namespace std;

class overloading{
    int a;
    int b;
public:
    void setter(int a){
       this-> a = a;
    }

    void setter(int a, int b){
       this-> a = a;
       this-> b = b;
    }

    void print(){
        cout<< a << " "<< b << endl;
    }

};

int  main(){
    overloading ob1;
    ob1.setter(10);  /// run setter funtion with one parameter
    ob1.print();  // a = 10,  b= garbage value

    ob1.setter(20, 14); // run setter funtion with two parameters

    ob1.print(); // a = 20, b = 14

    return 0;
}