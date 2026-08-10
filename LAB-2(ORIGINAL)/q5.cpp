#include<iostream>
using namespace std;

class Salary{
    float empid;
    string empname;
    float salary;
    float n,n1;
    float gross;
    public:
        void getdata(){
            cout<<"Employee ID:"<<endl;
            cin>>empid;
            cout<<"Employee Name:"<<endl;
            cin>>empname;
            cout<<"Salary:"<<endl;
            cin>>salary;
            gross=gross+salary;
        }
        void HRA(){
            cout<<endl;
            n=0.2*salary;
            cout<<"HRA:"<<n<<endl;
            gross+=n;
        }
        void DA(){
            cout<<endl;
            n1=0.1*salary;
            cout<<"DA:"<<n1<<endl;
            gross+=n1;
        }
        void Gross(){
            cout<<endl;
            cout<<"Gross Salary:"<<gross<<endl;
        }
        void details(){
            cout<<endl;
            cout<<"Employee ID:"<<empid<<endl;;
            cout<<"Employee Name:"<<empname<<endl;
            cout<<"Salary:"<<salary<<endl;
            cout<<"HRA:"<<n<<endl;
            cout<<"DA:"<<n1<<endl;
            cout<<"Gross Salary:"<<gross<<endl;
        }

}a1;

int main(){
    a1.getdata();
    a1.HRA();
    a1.DA();
    a1.Gross();
    a1.details();
    return 0;
}