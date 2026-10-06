#include<iostream>
using namespace std;

class Employee{
    protected:
      string name;
      int sal;
    public:  
      Employee(string s,int a){
        name=s;
        sal=a;
      }
};

class developer:public Employee{
    protected:
        int experience;
    public:    
        developer(string n,int salary,int exp) : Employee(n,salary){
            experience=exp;            
        }
        float experienceBonus(){
            return 0.05*sal*experience;
        }
};

class Seniordeveloper:public developer{
    private:
     int projectBonus;
    public:
        Seniordeveloper(string n,int salary,int exp,int pro):developer(n,salary,exp){
            projectBonus=pro;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<sal<<endl;
            cout<<"Experience: "<<experience<<endl;
            cout<<"projectBonus: "<<projectBonus<<endl;
        }
};

int main(){
        Seniordeveloper s("SS",2300,7,9000);
        int h=s.experienceBonus();
        s.display();
        cout<<"Experience Bomnus:"<<h<<endl;
        return 0;
}