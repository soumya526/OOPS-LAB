#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
    int marks1, marks2, marks3;

public:
    Student(string n, int r, int m1, int m2, int m3)
    {
        name = n;
        rollNo = r;
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    virtual void calculateResult()
    {
        int total = marks1 + marks2 + marks3;
        cout << "Total Marks: " << total << endl;
    }
};

class RegularStudent : public Student
{
public:
    RegularStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3)
    {
    }

    void calculateResult() override
    {
        int total = marks1 + marks2 + marks3;

        cout << "\nRegular Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

class ScholarshipStudent : public Student
{
public:
    ScholarshipStudent(string n, int r, int m1, int m2, int m3)
        : Student(n, r, m1, m2, m3)
    {
    }

    void calculateResult() override
    {
        int total = marks1 + marks2 + marks3;
        total = total + 5;   // Bonus marks

        cout << "\nScholarship Student" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    RegularStudent r("Soumya", 101, 70, 75, 80);
    ScholarshipStudent s("Rahul", 102, 70, 75, 80);

    r.calculateResult();
    s.calculateResult();

    return 0;
}