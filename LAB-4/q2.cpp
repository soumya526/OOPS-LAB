#include<iostream>
using namespace std;

class Mobile{
    string brand;
    int model;
    int battery;
    public:
        Mobile(string br,int m,int b){
            brand=b;
            model=m;
            battery=b;
        }
        friend void checkBattery(Mobile d);
};

void checkBattery(Mobile d){
    if(d.battery>=20){
        cout<<"Battery Normal"<<endl;
    }
    else{
        cout<<"Battery Low"<<endl;
    }
}

int main(){
    Mobile d("Redmi",127,30);
    checkBattery(d);
    return 0;
}