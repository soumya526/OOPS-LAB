/*3. Library Shelf
A library stores the identification numbers of 6 books in an array.
Write a program to:
1. Display all book IDs using a pointer.
2. Display the address of each book ID.
Condition: Traverse the array using pointer increment*/

#include<iostream>
using namespace std;

int main(){
    int *arr=new int[6];
    cout<<"Enter the IDs of books"<<endl;
    for(int i=0;i<6;i++){
        cout<<"Enter ID of "<<i<<" Book:"<<endl;
        cin>>arr[i];
    }
    cout<<"The Book IDs are:"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Address of each book IDs:"<<endl;
    for(int i=0;i<6;i++){
        cout<<&arr[i]<<" ";
    }
    return 0;
}