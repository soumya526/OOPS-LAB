#include <iostream>
using namespace std;

class Temperature {
    float celsius;

public:
    Temperature(float c) {
        celsius = c;
    }

    bool operator<(Temperature& other) {
        return celsius < other.celsius;
    }

    bool operator>(Temperature& other) {
        return celsius > other.celsius;
    }

    void compare(Temperature& other) {
        if (*this < other)
            cout << "First temperature is lower than the second.\n";
        else if (*this > other)
            cout << "First temperature is higher than the second.\n";
        else
            cout << "Both temperatures are equal.\n";
    }
};

int main() {
    Temperature t1(25);
    Temperature t2(30);

    t1.compare(t2);

    return 0;
}