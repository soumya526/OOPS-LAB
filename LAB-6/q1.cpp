/*1. Delivery Counter
A delivery company stores the number of parcels delivered in a variable.
Write a C++ program that creates a pointer to this variable. Display the number of parcels
using the pointer, increase the number by a value entered by the user using the pointer,
and display the updated number*/

#include<iostream>
using namespace std;

int main(){
    int *j=new int;
    cout<<"Enter no of parcels:"<<endl;
    cin>>*j;
    cout<<"No of parcels:"<<*j<<endl;
    *j=*j+1;
    cout<<"Increased value is "<<*j<<endl;
    return 0;
}