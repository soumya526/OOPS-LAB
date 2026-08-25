#include<iostream>
using namespace std;

int compare(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int compare(float a,float b){
    if(a>=b){
        return 1;
    }
    else{
        return 0;
    }
}

int compare(int arr1[],int arr2[],int n1){
    for(int i=0;i<n1;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    float a=9,b=8;
    cout<<compare(5,6)<<endl;
    if(compare(a,b)==0){
        cout<<b<<endl;
    }

    else{
        cout<<a<<endl;
    }
    if(compare(arr1,arr2,5)==0){
        cout<<"Not equal"<<endl;
    }
    else{
        cout<<"Equal"<<endl;
    }
    return 0;
}