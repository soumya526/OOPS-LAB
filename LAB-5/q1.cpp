#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}

int sum(float a,float b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int main(){
    int a=8,b=9,c=10;
    float f=9.0,j=8.0;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(f,j)<<endl;
    return 0;
}

