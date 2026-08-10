#include<iostream>
using namespace std;

class Rectangle{
    int l;
    int b;
    public:
        void getdim(){
            cout<<"Enter the length:\n";
            cin>>l;
            cout<<"Enter the breadth:\n";
            cin>>b;
        }
        void area(){
            cout<<endl;
            cout<<"Area:"<<l*b<<endl;
        }
        void peri(){
            cout<<"Perimeter:"<<2*(l+b)<<endl;
        }
}a1;

int main(){
    a1.getdim();
    a1.area();
    a1.peri();
    return 0;
}