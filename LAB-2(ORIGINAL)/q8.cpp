#include<iostream>
using namespace std;

class Book{
    int bid;
    string title;
    string name;
    int day;
    int fine;
    public:
        void getdata(){
            cout<<"BookID:"<<endl;
            cin>>bid;
            cout<<"Book Title:"<<endl;
            cin>>title;
            cout<<"Student Name:"<<endl;
            cin>>name;
            cout<<"No. of Days the Book was Issued:"<<endl;
            cin>>day;
        }
        void getreturn(){
            int n;
            cout<<"Enter no of days\n";
            cin>>n;
            if(n>day){
                fine=n-day;
                cout<<"Fine:"<<fine*20;

            }
        }
        void display(){
            cout<<"Student Name:"<<name<<endl;
            cout<<"BookID:"<<bid<<endl;
            cout<<"Book Title:"<<title<<endl;
            cout<<"No of days of Issue:"<<day<<endl;
            cout<<"Fine Amount"<<fine<<endl;
        }
}a1;

int main(){
    a1.getdata();
    a1.getreturn();
    a1.display();
    return 0;
}