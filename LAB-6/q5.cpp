/*5. MuseumVisitor Update
Amuseum stores the number of visitors for the day.
Write a function:
void updateVisitors(int *count);
The function should accept the number of newly arrived visitors and update the original
visitor count through the pointer.
Display the visitor count before and after calling the function*/

#include<iostream>
using namespace std;

void updateVisitors(int *count){
    int*p=new int;
    cout<<"Enter the newly arrived visitors:"<<endl;
    cin>>*p;
    *count=*count+*p;
}

int main(){
    int*count=new int;
    cout<<"Enter the no of visitors: "<<endl;
    cin>>*count;
    cout<<"Visitors count before: "<<endl;
    cout<<*count<<endl;
    updateVisitors(count);
    cout<<"Visitors count after: "<<endl;
    cout<<*count<<endl;
    return 0;
}