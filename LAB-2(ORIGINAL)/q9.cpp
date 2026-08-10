#include<iostream>
using namespace std;

class Student{
    string name;
    int rno;
    int m;
    int p;
    int c;
    int e;
    int t;
    int total;
    float percentage;
    public:
        void getdata(){
            cout<<"Enter Name:"<<endl;
            cin>>name;
            cout<<"Enter RollNo:"<<endl;
            cin>>rno;
            cout<<"Enter marks of Maths:"<<endl;
            cin>>m;
            cout<<"Enter marks of Physics:"<<endl;
            cin>>p;
            cout<<"Enter marks of Chemistry:"<<endl;
            cin>>c;
            cout<<"Enter marks in Englsh:"<<endl;
            cin>>e;
            cout<<"Enter marks in CompSc.:"<<endl;
            cin>>t;
        }
        void calcTotal(){
            total=m+c+p+e+t;
            cout<<"Total Marks Obtained:"<<total<<endl;
            percentage=total*0.2;
            cout<<"Percentage:"<<percentage<<endl;
        }
        void assign(){
            if(percentage>=90){
                cout<<"A"<<endl;
            }
            else if(percentage>=80 && percentage<90){
                cout<<"B"<<endl;
            }
            else if(percentage>=70 && percentage<80){
                cout<<"C"<<endl;
            }
            else if(percentage>=60 && percentage<70){
                cout<<"D"<<endl;
            }
            else{
                cout<<"F"<<endl;
            }
        }
        void display(){
            cout<<"Student Name:"<<name<<endl;
            cout<<"Roll No.:"<<rno<<endl;
            cout<<"Marks in Maths:"<<m<<endl;
            cout<<"Marks in Physics:"<<p<<endl;
            cout<<"Marks in Chemistry:"<<c<<endl;
            cout<<"Marks in English:"<<e<<endl;
            cout<<"Marks in CompSc.:"<<t<<endl;
            cout<<"Total Marks out of Hundred:"<<total<<endl;
            cout<<"Percentage:"<<percentage<<"%"<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.calcTotal();
    a1.display();
    a1.assign();
    return 0;
}