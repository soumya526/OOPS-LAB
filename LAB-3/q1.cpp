#include<iostream>
using namespace std;

int main(){
    int*ptr;
    ptr=new int;
    cout<<"Enter an integer: "<<endl;
    cin>>*ptr;
    cout<<"The value is: "<<*ptr<<endl;
    delete ptr;
    return 0;
}