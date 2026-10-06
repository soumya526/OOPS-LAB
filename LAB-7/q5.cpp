#include<iostream>
using namespace std;

class Academic{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        Academic(int a,int b,int c){
            s1=a;
            s2=b;
            s3=c;
        }    
};

class Sport{
    protected:
        int s;
    public:
        Sport(int m){
            s=m;
        }    
};

class StudentResult:public Academic,public Sport{
    int total;    
    public:
            StudentResult(int a,int b,int c,int d):Academic(a,b,c),Sport(d){}
            void op(){
                int total=s1+s2+s3+s;
                int avg=total/4;
                cout<<"Total Marks: "<<total<<endl;
                cout<<"Avg Marks: "<<avg<<endl;
            }

};

int main(){
    StudentResult d(23,26,25,30);
    d.op();
    return 0;
}