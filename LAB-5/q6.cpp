#include<iostream>
using namespace std;

void display(int a){
    cout<<a<<endl;
}

void display(float b){
    cout<<b<<endl;
}

void display(char a){
    cout<<a<<endl;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void display(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a=10;
    float b=9.0;
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    char c[5];
    for(int i=0;i<5;i++){
        cin>>c[i];
    }
    display(a);
    display(b);
    display(arr,5);
    display(c,5);
    return 0;
}