#include<bits/stdc++.h>
using namespace std;

class student{
private:
  int rollnumber;
  int age;
public:
// getter function 
    int getRollno(){
        return rollnumber;
    }
    int getAge(){
        return age;
    }
// setter function
    void set(int r, int a){
        rollnumber = r;
        age = a;
    }
  
};

int main() {
 // static allocation   
    // student s1;
    // s1.rollnumber = 145;
    // s1.age = 21;
    // cout<< s1.rollnumber<< endl;
    // cout<< s1.age<< endl;
    
    // student s2;
    
    // s2.rollnumber = 354;
    // s2.age = 19;
    
    // cout<< s2.rollnumber<< endl;
    // cout<<s2.age;
    
 //dynamic allocation
    
    // student *p = new student;
    // p-> rollnumber = 1383;
    // p-> age = 17;
    
    // cout<< p->rollnumber << endl;
    // cout<< p->age << endl;
    
    
// getter and setter
  // static allocation
  
    // student s1;
    // s1.set(164, 21);
    
    // cout<<s1.getRollno() << endl;
    // cout<< s1.getAge() << endl;
 
 // dynamic allocation 
 
    student *s2 = new student;
    s2-> set(176, 20);
    
    cout<< s2-> getRollno()<< endl;
    cout<< s2-> getAge() << endl;
    


    return 0;
}