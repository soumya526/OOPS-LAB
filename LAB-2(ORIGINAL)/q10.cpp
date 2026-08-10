#include<iostream>
using namespace std;

class Bill{
    int no;
    string name;
    int units;
    int bill;
    public:
        void getdata(){
            cout<<"Enter Consumer Name:"<<endl;
            cin>>name;
            cout<<"Enter Consumer Number:"<<endl;
            cin>>no;
            cout<<"Enter Units:"<<endl;
            cin>>units;
        }
        void bills(){
            if(units<=100){
                bill=units*5;
            }
            else if(units>=100 && units<=200){
                bill=(units-100)*(7)+500;
            }
            else if(units>200){
                bill=(units-200)*10+1200;
            }
        }

        void display(){
            cout<<"Consumer Name:"<<name<<endl;
            cout<<"Consumer Number:"<<no<<endl;
            cout<<"Units Consumed:"<<units<<endl;
            cout<<"Bill:Rs"<<bill<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.bills();
    a1.display();
    return 0;
}