/*1. Distance Addition
Create a class Distance containing feet and inches.
Overload the + operator to add two Distance objects. If the total number of inches is 12
or more, convert the excess inches into feet.
For example:
Distance 1: 5 feet 8 inches
Distance 2: 3 feet 7 inches
Result:
9 feet 3 inches
The overloaded operator should return the resulting Distance object*/

#include<iostream>
using namespace std;

class Distance{
    int feet;
    int inches;
    public:
        Distance(int a,int b){
            feet=a;
            inches=b;
        }
        Distance operator+(Distance obj){
            Distance temp(0,0);
            temp.feet=feet+obj.feet;
            temp.inches=inches+obj.inches;
            if(temp.inches>12){
                temp.feet+=temp.inches/12;
                temp.inches=temp.inches%12;
            }
            return temp;
        }
        void display(){
            cout<<"feet="<<feet<<"inches="<<inches<<endl;
        }
};

int main(){
    Distance d1(12,9);
    Distance d2(34,9);
    Distance d3=d1+d2;
    d3.display();
    return 0;
}