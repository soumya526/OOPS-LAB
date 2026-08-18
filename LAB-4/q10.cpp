#include <iostream>
#include <string>
using namespace std;

class Hm;

class s
{
private:
    string d;
    string dt;
    int ps;

public:
    s(string dl,string dk,int p)
    {
        d=dl;
        dk=dt;
        ps=p;
    }

    friend class Hm;
};

class Hm
{
private:
    int per;
    bool td;    
public:
    void display(s k)
    {
        cout<<"Device Name: "<<k.d<<endl;
        cout<<"Device Type: "<<k.dt<<endl;
        cout<<"Battery Status: "<<k.ps<<endl;
    }
    void turn(){
        int y;
        cout<<"Turn ON/OFF(1/0)"<<endl;
        cin>>y;
        if(y==0){
        cout<<"The device turn   off"<<endl;
        }
        else {
            cout<<"The device turned on"<<endl;
        }
    }
    void displayc(s k){
        cout<<"Device Name: "<<k.d<<endl;
        cout<<"Device Type: "<<k.dt<<endl;
        cout<<"Battery Status: "<<k.ps<<endl;
    }
};

int main()
{
    s k("MOBILE","Electric",20);
    Hm r;
    r.display(k);
    r.turn();
    r.displayc(k);
    return 0;
}