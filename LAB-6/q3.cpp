/*3. Student Marks Comparison
Create a class Student containing student name and total marks.
Overload the > operator to compare two Student objects based on their total marks.
Use the overloaded operator to determine which student has higher marks.
Condition: The overloaded operator must return a bool value*/

#include<iostream>
using namespace std;

class Student{
    string name;
    int marks;
    public:
        Student(string s,int b){
            name=s;
            marks=b;
        }
        bool operator>(Student obj){
            return marks>obj.marks;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }

};

int main(){
    Student s1("SS",33);
    Student s2("FF",90);
    if(s1>s2){
        cout<<"Student 1 has highest mark"<<endl;
    }
    else{
        cout<<"Student 2 has highest marks"<<endl;
    }
    return 0;
}