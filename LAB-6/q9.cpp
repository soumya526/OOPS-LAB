/*9. Parking Slot Monitor
A parking system does not know in advance how many parking slots it needs to store.
Write a program that:
1. Dynamically allocates memory for n parking slot statuses.
2. Uses 0 for available and 1 for occupied.
3. Counts available and occupied slots using a pointer.
4. Releases the dynamically allocated memory*/

#include<iostream>
using namespace std;

int main(){
    int *arr=new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the occupancy for "<<i+1<<"th:"<<endl;
        cin>>arr[i]; 
    }
    int a=0,o=0;
    for(int i=0;i<5;i++){
        if(arr[i]==1){
            o++;
        }
        else{
            a++;
        }
    }
    cout<<"The occupied slots are: "<<o<<endl;
    cout<<"The occupied slots are: "<<a<<endl;
    delete[] arr;
    return 0;
}