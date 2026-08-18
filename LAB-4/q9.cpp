#include <iostream>
#include <string>
using namespace std;

class Result;

class Exam
{
private:
    string sname;
    string sub;
    int marks;
    int maxi;

public:
    Exam(string nam,string s,int ma,int mma)
    {
        sname=nam;
        sub=s;
        marks=ma;
        maxi=mma;
    }

    // Declare TicketChecker as a friend class
    friend class Result;
};

class Result
{
private:
    int per;    
public:
    void Percentage(Exam d)
    {
        per=(d.marks/d.maxi)*100;
    }
    void qual(){
        if(per>=40){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }
    void display(Exam d){
        cout<<"Student Name: "<<d.sname<<endl;
        cout<<"Subject: "<<d.sub<<endl;
        cout<<"Marks: "<<d.marks<<endl;
        cout<<"Max Marks: "<<d.maxi<<endl;
    }
};

int main()
{
    Exam d("ABC","MATHS",50,100);
    Result r;
    r.Percentage(d);
    r.qual();
    r.display(d);
    return 0;
}