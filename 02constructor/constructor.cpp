// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

class student{
    int rollno;
    int age;
public:
    void print(){
        cout<< rollno<<endl;
        cout<< age;
    }
    
// default constructor
   student(){
       cout<< "default constructor called"<< endl;
   }
   
//parameterised constructor
    student(int r){
        rollno = r;
        cout<< "constructor2 called"<< endl;
    }
    student(int rollno, int age){
       this-> rollno = rollno;
        this->age = age;
        cout<<"contructor 3 called"<< endl;
    }
    
};

int main() {
    student s1; // s1.student();
    student s2(37); // s2.student(37);
    student s3(53, 12); // s3.student(53, 12);
    
    s3.print();
    return 0;
}