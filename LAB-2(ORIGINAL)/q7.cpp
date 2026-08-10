#include<iostream>
using namespace std;

class Product{
    int pid;
    string name;
    int qty;
    int price;
    int inv;
    public:
        void getdata(){
            cout<<"Enter ProductID:\n";
            cin>>pid;
            cout<<"Enter Product Name:"<<endl;
            cin>>name;
            cout<<"Quantity Available:"<<endl;
            cin>>qty;
            cout<<"Enter Price per Unit:"<<endl;
            cin>>price;
        }
        void display(){
            cout<<endl;
            cout<<"ProductID:"<<pid<<endl;
            cout<<"Product Name:"<<name<<endl;
            cout<<"Quantity Available:"<<qty<<endl;
            cout<<"Price per Unit:"<<price<<endl;
        }
        void sold(){
            cout<<endl;
            int n;
            cout<<"Enter the no of product sold:"<<endl;
            cin>>n;
            qty=qty-n;
            cout<<"Quantity:"<<qty<<endl;
        }
        void inventory(){
            cout<<endl;
            inv=qty*price;
            cout<<"Total Inventory Value:"<<inv<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.display();
    a1.sold();
    a1.inventory();
    return 0;
}