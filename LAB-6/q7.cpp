/*7. Message Inspector
A messaging application stores a sentence in a character array.
Using a character pointer, count:
• Numberofuppercase letters.
• Numberoflowercase letters.
• Numberofspaces.
Traverse the sentence until the null character ’\0’*/

#include<iostream>
using namespace std;

int main(){
    char arr1[5]={'a','A',' ','l','T'};
    char*arr=arr1;
    int u=0,l=0,s=0;
    for(int i=0;i<5;i++){
        if(arr[i]>='a' && arr[i]<='z'){
            l++;
        }
        else if(arr[i]>='A' && arr[i]<='Z'){
            u++;
        }
        else if(arr[i]==' '){
            s++;
        }
    }
    cout<<"Lower Case: "<<l<<endl;
    cout<<"Upper Case: "<<u<<endl;
    cout<<"Spaces: "<<s<<endl;
    return 0;
}