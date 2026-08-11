#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows: "<<endl;
    cin>>m;
    cout<<"Enter number of columns: "<<endl;
    cin>>n;
    int **matrix=new int*[m];
    for(int i=0;i<m;i++){
        matrix[i]=new int[n];
    }
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix=nullptr;
    return 0;
}