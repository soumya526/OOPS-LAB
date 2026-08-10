#include<iostream>
using namespace std;

class Calc{
    int n1;
    int n2;
    public:
        void getdata(){
            cout<<"Enter number1:"<<endl;
            cin>>n1;
            cout<<"Enter number2:"<<endl;
            cin>>n2;
        }
        void Addition(){
            cout<<endl;
            cout<<"Addition:"<<n1+n2<<endl;
        }
        void Subtraction(){
            cout<<"Subtraction:"<<n1-n2<<endl;
        }
        void Multiplication(){
            cout<<"Multiplication:"<<n1*n2<<endl;
        }
        void Division(){
            if(n2==0){
                cout<<"Undefined"<<endl;
            }
            cout<<"Division:"<<n1/n2<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.Addition();
    a1.Subtraction();
    a1.Multiplication();
    a1.Division();
    return 0;
}