#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    float *arr=new float[n];
    float sum=0;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg;
    avg=sum/n;
    cout<<"The sum of nos:"<<sum<<endl;
    cout<<"The average of nos:"<<avg<<endl;
    delete[] arr;
    arr=nullptr;
    return 0;
}