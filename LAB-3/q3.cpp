#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    cout<<"The largest element is:"<<maxi<<endl;
    delete[] arr;
    arr=nullptr;
    return 0;
}