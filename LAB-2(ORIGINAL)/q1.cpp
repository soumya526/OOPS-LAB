#include<iostream>
using namespace std;

class Student{
    int rno;
    string name;
    int marks;
    public:
        void getdetails(){
            cout<<"Enter the RollNo.:"<<endl;
            cin>>rno;
            cout<<"Enter the name:"<<endl;
            cin>>name;
            cout<<"Enter the marks:"<<endl;
            cin>>marks;
        }
        void display(){
            cout<<endl;
            cout<<"RollNo.:";
            cout<<rno<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"marks:"<<marks<<endl;
        }
}a1;

int main(){
    a1.getdetails();
    a1.display();
    return 0;
}