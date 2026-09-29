/*4. Negative Value Converter
Create a class Number containing an integer value.
Overload the unary- operator so that applying it to an object creates a new object
containing the negative of its value.
For example:
Number n1 = 25;
Number n2 =-n1;
n1 = 25
n2 =-25
The original object must remain unchanged*/
#include<iostream>
using  namespace std;

class Number{
    int n;
    public:
        Number(int a){
            n=a;
        }
        Number operator-(){
            return Number(-n);
        }

        void display(){
            cout<<n<<endl;
        }
};

int main(){
    Number n1(23);
    Number n2=-n1;
    n2.display();
    return 0;

}