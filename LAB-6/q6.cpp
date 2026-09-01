/*6. Grocery Price Scanner
A grocery store stores the prices of 7 products.
Write a function that receives:
• Apointer to the first price.
• Thenumberofproducts.
Using pointer traversal, find and display the highest price.
Condition: Do not use array indexing inside the function*/

#include<iostream>
using namespace std;

int d(int*arr,int n){
    int *maxi=new int;
    *maxi=0;
    for(int i=0;i<7;i++){
        if(*maxi<=*arr){
            *maxi=*arr;
        }
        arr++;
    }
    return *maxi;
}

int main(){
    int *arr=new int[7];
    cout<<"Enter the Price of products:"<<endl;
    for(int i=0;i<7;i++){
        cin>>arr[i];
    }
    int h;
    h=d(arr,7);
    cout<<"The highest price: "<<h<<endl;
    return 0;
}