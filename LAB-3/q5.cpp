#include<iostream>
using namespace std;

class Student{
    private:
        int rno;
        string name;
        float marks;
    public:
        void accept(){
            cout<<"Enter Roll Number:"<<endl;
            cin>>rno;
            cout<<"Enter Name:"<<name<<endl;
            cin>>name;
            cout<<"Enter the marks:"<<endl;
            cin>>marks;
        }
        void display(){
            cout<<"\n Student Details"<<endl;
            cout<<"Roll No: "<<rno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }    
};

int main(){
    Student *student=new Student;
    student->accept();
    student->display();
    delete student;
    student=nullptr;
    return 0;
}