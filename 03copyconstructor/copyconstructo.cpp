#include<bits/stdc++.h>
using namespace std;

class student{

    int rollno;
    int age;
public:
  //parameterized constructor
    student(int r, int a){
        rollno = r;
        age = a;
    }
// copy constructor( we can use const word to avoid modification of s1 though t object;)
   student(const student &t){
        rollno = t.rollno;
        age = t.age;
   }


    void print(){
        cout<< "Roll No: "<< rollno<<endl;
        cout<< "Age: "<< age<<endl;
    }


};

int main(){

    student s1(288, 21); // s1.student();
  //  student s2(s1); //  default copy contructor called when copy constructor is not define in class;
    student s3(s1);  // copy contructor called;
    s3.print();
    return 0;
}