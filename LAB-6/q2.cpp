/*2. Digital Wallet Balance
A digital wallet stores the current balance of a user.
Create a pointer pointing to the balance. Using the pointer:
1. Display the current balance.
2. Addaspecified amount.
3. Deduct a specified amount.
4. Display the final balance*/

#include<iostream>
using namespace std;

int main(){
    int balance;
    cout<<"Enter the balance: "<<endl;
    cin>>balance;
    int*p=&balance;
    cout<<"Current Balance: "<<balance<<endl;
    int a;
    cout<<"Enter the amount to be added: "<<endl;
    cin>>a;
    *p=*p+a;
    cout<<"Updated amount: "<<*p<<endl;
    cout<<"Enter the deducted amount:"<<endl;
    int d;
    cin>>d;
    *p=*p-d;
    cout<<"The updated amount: "<<endl;
    cout<<*p;
    return 0;
}