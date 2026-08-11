#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string employeeName;
    float salary;

public:
    // Function to accept employee details
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main(){
    int n;
    cout<<"Enter the no. of employees: "<<endl;
    cin>>n;
    Employee *emp=new Employee[n];
    for(int i=0;i<n;i++){
        cout<<"\nEnter details of Employee "<<i+1<<":\n";
        emp[i].accept();
    }
    cout<<"\n....Employee Details....\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Employee"<<i+1<<":\n";
        emp[i].display();
        cout<<endl;
    }
    delete[] emp;
    emp=nullptr;
    return 0;
}