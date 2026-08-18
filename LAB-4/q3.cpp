#include<iostream>
using namespace std;

class ParkingSlot{
    int no;
    string vno;
    bool oc;
    public:
        ParkingSlot(int n,string vn,bool o){
            no=n;
            vno=vn;
            oc=o;
        }
        friend void checkSlot(ParkingSlot d);
};

void checkSlot(ParkingSlot d){
    if(d.oc==1){
        cout<<"Slot Number:"<<d.no<<endl;
        cout<<"Vechile Number:"<<d.vno<<endl;
        cout<<"Occupancy Status:Occupied"<<endl;
    }
    else{
        cout<<"Occupancy Status:Not Occupied"<<endl;
    }
}

int main(){
    ParkingSlot d(1,"OD02S2020",1);
    checkSlot(d);
    return 0;
}