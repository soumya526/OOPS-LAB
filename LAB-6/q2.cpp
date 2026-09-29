/*2. Complex NumberSubtraction
Create a class Complex containing real and imaginary parts.
Overload the- operator to subtract two complex numbers.
For example:
C1 = 8 + 5i
C2 = 3 + 2i
C1- C2 = 5 + 3i
Display the result in a proper complex-number format*/
#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
        Complex(int a,int b){
            real=a;
            img=b;
        }
        Complex operator-(Complex obj){
            Complex temp(0,0);
            temp.real=real-obj.real;
            temp.img=img-obj.img;
            return temp;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    Complex c1(5,2);
    Complex c2(7,9);
    Complex c3(0,0);
    c3=c2-c1;
    c3.display();
    return 0;
}