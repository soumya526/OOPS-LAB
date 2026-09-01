/*4. Cinema Seat Update
A cinema stores 8 seat numbers in an array.
Write a program that uses pointer arithmetic to change the seat number at a position
entered by the user.
Display the seat numbers before and after the update.
Condition: Do not use arr[position] for updating the element*/

#include<iostream>
using namespace std;

int main(){
    int *p=new int;
    cout<<"Enter the seat no:"<<endl;
    cin>>*p;
    cout<<"Seat no before change: "<<*p<<endl;
    cout<<"Enter the seat no. by which you want to change: "<<endl;
    int n;
    cin>>n;
    *p=*p+n;
    cout<<"Seat no after change: "<<*p<<endl;
    return 0;

}