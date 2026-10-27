#include<iostream>
using namespace std;

class ParkingSlot{
    public:
        int hrs;
        int fee;
        virtual void calculateFee(int hrs)=0;
};

class TwoWheelerSlot: public ParkingSlot{
    public:
        void calculateFee(int hrs) override{
            if(hrs>5){
                int k=hrs*10;
                fee=k-(10*k/100);
            }
            else{
                fee=hrs*10;
            }
        }

        void getfee(){
            cout<<"Total fee for 2 wheeler:"<<fee<<endl;
        }
};

class FourWheelerSlot: public ParkingSlot{
    public:
        void calculateFee(int hrs) override{
            if(hrs>5){
                int k=hrs*30;
                fee=k-(10*k/100);
            }
            else{
                fee=hrs*30;
            }
        }

        void getfee(){
            cout<<"Total fee for 4 wheeler:"<<fee<<endl;
        }
};
int main(){
    TwoWheelerSlot w;
    FourWheelerSlot a;
    int y;
    cout<<"Enter hours for 2 wheeler: "<<endl;
    cin>>y;
    int h;
    cout<<"Enter hours for 4 wheeler: "<<endl;
    cin>>h;
    w.calculateFee(y);
    a.calculateFee(h);
    w.getfee();
    a.getfee();
    return 0;
}