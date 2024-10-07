#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
        int real=0;
        int img=0; /// cmplex number (real + i*img)
    public:
        Complex(int real, int i){
            this->real = real;
            img = i;
        }

        Complex operator+(Complex &obj){
            Complex result(0, 0);  // result.complex(0,0);
            result.real = this-> real  + obj.real;
            result.img = this->img + obj.img;

            return result;
        }

        void print(){
            cout<< real<< " + i" << img<< endl;
        }
};

int main(){
    Complex c1(10, 3);
    c1.print();
    Complex c2(5, 2);
    c2.print();

    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}