#include<iostream>
using namespace std;

class BankAccount{
    protected:
        int acno;
        int balance;
        BankAccount(int a,int b){
            acno=a;
            balance=b;
        }
};

class savingaccounts:public BankAccount{
       protected:
            float inte;
       public:     
             savingaccounts(int a,int b,float c):BankAccount(a,b){
                    inte=c;
             } 
            void interest(){
                balance=(balance*inte+balance);
             }
};

class Currentaccount:public savingaccounts{
       protected:
            int maint;
       public:     
            Currentaccount(int a,int b,float c,int d):savingaccounts(a,b,c){
                    inte=c;
             }
            void deduct(){
                balance=balance-maint;
            }
            void display(){
                cout<<"Balance: "<<balance<<endl;
            }
};


int main(){
    Currentaccount s(125125,83000,1.5,2500);
    s.interest();
    s.interest();
    s.display();
    return 0;
}