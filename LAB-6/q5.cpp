/*5. Time Addition
Create a class Time containing hours and minutes.
Overload the + operator to add two Time objects.
If the total number of minutes becomes 60 or more, convert the excess minutes into hours.
For example:
Time 1: 4 hours 45 minutes
Time 2: 2 hours 30 minutes
Result: 7 hours 15 minute*/

#include<iostream>
using namespace std;

class Time{
    int hr;
    int min;
    public:
        Time(int a,int b){
            hr=a;
            min=b;
        }
        Time operator+(Time obj){
            Time temp(0,0);
            temp.hr=hr+obj.hr;
            temp.min=min+obj.min;
            if(temp.min>=60){
                temp.hr+=temp.min/60;
                temp.min=temp.min%12;
            }
            return temp;
        }
        void display(){
            cout<<" Hour= "<<hr<<" min= "<<min<<endl;
        }
};

int main(){
    Time d1(12,9);
    Time d2(34,9);
    Time d3=d1+d2;
    d3.display();
    return 0;
}