#include <iostream>
#include <string>
using namespace std;

class Product {
    string name;
    float price;
    int quantity;

public:
    Product(string n, float p, int q) {
        name = n;
        price = p;
        quantity = q;
    }

    // Overload +
    Product operator+(Product& other) {
        if (name == other.name && price == other.price) {
            return Product(name, price, quantity + other.quantity);
        }

        cout << "Products cannot be combined.\n";
        return *this;
    }

    // Overload >
    bool operator>(Product& other) {
        return (price * quantity) > (other.price * other.quantity);
    }

    void display() {
        cout << "Product: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Value: " << price * quantity << endl;
    }
};

int main() {
    Product p1("Laptop", 50000, 2);
    Product p2("Comp", 50000, 3);

    // Using + operator
    Product p3 = p1 + p2;

    cout << "Combined Product:\n";
    p3.display();

    // Using > operator
    cout << "\nComparing total values:\n";

    if (p1 > p2)
        cout << "Product 1 has greater total value.\n";
    else
        cout << "Product 2 has greater or equal total value.\n";

    cout << "\nOriginal Product 1:\n";
    p1.display();

    cout << "\nOriginal Product 2:\n";
    p2.display();

    return 0;
}