/*10. Student ID Search
A university receives a variable number of student IDs.
Write a program that:
1. Dynamically allocates memory for n student IDs.
2. Accepts all student IDs.
3. Searches for a particular ID using pointer traversal.
4. Displays whether the ID is found and its position.
5. Properly deallocates the memory.
Condition: Do not use array indexing while searching.*/

#include<iostream>
using namespace std;

int main(){
    int *arr=new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the "<<i<<"th: "<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the ID u want to search:"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            cout<<"ID found at position "<<i<<endl;
            break;
        }
        else if(arr[i]!=n && i==4){
            cout<<"ID not found"<<endl;
        }
    }
    delete[] arr;
    return 0;
}