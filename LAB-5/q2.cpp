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
        return a;
    }
    else{
        return b;
    }
}

int compare(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else if(c>=a && c>=b){
        return c;
    }
}

int main(){
    int a=9,b=8,c=56;
    float h=5,g=0;
    cout<<compare(a,b)<<endl;
    cout<<compare(h,g)<<endl;
    cout<<compare(a,b,c)<<endl;
    return 0;
}