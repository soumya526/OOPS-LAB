/*6. Counter Increment
Create a class Counter containing an integer value.
Overload the increment operator to support both prefix and postfix forms:
++c;
c++;
Both operations should increase the counter value by 1.
Display the value before and after each operation.
Hint: Prefix and postfix increment operators require different function signatures.*/

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0){
        value=v;
    }

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;              
        return temp;          
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Counter c(10);

    cout << "Initial Counter value: ";
    c.display();
    cout << "---------------------------" << std::endl;

    cout << "Before Prefix (++c): ";
    c.display();
    
    ++c;
    
    cout << "After Prefix (++c):  ";
    c.display();
    cout << "---------------------------" << std::endl;

    // Testing Postfix Increment
    cout << "Before Postfix (c++): ";
    c.display();
    
    c++;
    
    cout << "After Postfix (c++):  ";
    c.display();

    return 0;
}