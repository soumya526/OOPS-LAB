#include<iostream>
using namespace std;

class Bank{
    int no;
    string name;
    int balance;
    public:
        void getdata(){
            cout<<"Account Number:"<<endl;
            cin>>no;
            cout<<"Account Holder Name:"<<endl;
            cin>>name;
            cout<<"Balance:"<<endl;
            cin>>balance;
        }
        void Deposit(){
            cout<<endl;
            int n;
            cout<<"Enter Deposit Amount:"<<endl;
            cin>>n;
            balance+=n;
            cout<<"Deposited Sucessfully"<<endl;
            cout<<"Total Balance:"<<balance<<endl;
        }
        void Withdraw(){
            cout<<endl;
            int n3;
            cout<<"Enter the Withdrawal Amount:"<<endl;
            cin>>n3;
            if(n3>balance){
                cout<<"Balance Insufficient"<<endl;
                cout<<"Withdrawal Unsucessfull"<<endl;
                n3=0;
                return;
            }
            balance=balance-n3;
            cout<<"Total Balance:"<<balance<<endl;
        }
        void Display(){
            cout<<endl;
            cout<<"Account No.:"<<no<<endl;
            cout<<"Account Name:"<<name<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.Deposit();
    a1.Withdraw();
    a1.Display();
    return 0;
}