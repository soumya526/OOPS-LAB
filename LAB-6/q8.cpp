/*8. GameScore Adjustment
A game stores the scores of n players in an array.
Write a function that receives a pointer to the scores and the number of players. The
function should increase every score by 10.
Display the scores before and after calling the function.
Condition: The original array must be modified using pointers*/

#include<iostream>
using namespace std;

void f(int*arr,int n){
    for(int i=0;i<n;i++){
        arr[i]+=10;
    }
}
int main(){
    int*arr=new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i<<"th element"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"The "<<i<<"th element"<<endl;
        cout<<arr[i]<<endl;
    }
    f(arr,5);
    cout<<"After function called:"<<endl;
        for(int i=0;i<5;i++){
        cout<<"The "<<i<<"th element"<<endl;
        cout<<arr[i]<<endl;
    }
    return 0;
}