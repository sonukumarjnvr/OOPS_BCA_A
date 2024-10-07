#include<bits/stdc++.h>
using namespace std;

class base{
 public :
   
    virtual void display(){
        cout<< " display function of base class is called"<<endl;
    }

    void print(){
        cout<<" print function of base class is called"<<endl;
    }
};

class child : public base{
public :
    void display(){
        cout<< " display function of child class is called"<<endl;
    }

    void print(){
        cout<<" print function of child class is called"<<endl;
    }
};
int main(){
    base *p;
    child c1; 
    p = &c1;
    p-> display();

    return 0;
}