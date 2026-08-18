#include<iostream>
using namespace std;

class Food{
    int oid;
    string fd;
    int qty;
    float p;
    public:
        Food(int id,string f,int q,float pr){
            oid=id;
            fd=f;
            qty=q;
            p=pr;
        }
        friend void calculateBill(Food d);
};

void calculateBill(Food d){
    float s=d.qty*d.p;
    cout<<"Total Bill: "<<s<<endl;
}

int main(){
    Food d1(125,"Dal",3,32.5);
    calculateBill(d1);
    return 0;
}