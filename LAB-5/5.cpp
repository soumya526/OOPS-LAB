#include <iostream>
using namespace std;

int modify(int value, int amount)
    {
        return value + amount;
    }

double modify(double value, double amount)
    {
        return value + amount;
    }

void modify(int *value, int amount)
    {
        *value = *value + amount;
    }

int main()
{
    int choice;

    cout << "===== Modify a Value =====" << endl;
    cout << "1. Add value to an integer" << endl;
    cout << "2. Add value to a floating-point number" << endl;
    cout << "3. Modify an integer using pointer" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            int value, amount;

            cout << "Enter integer value: ";
            cin >> value;

            cout << "Enter value to add: ";
            cin >> amount;

            cout << "Before modification: "
                 << value << endl;

            value =modify(value, amount);

            cout << "After modification: "
                 << value << endl;

            break;
        }

        case 2:
        {
            double value, amount;

            cout << "Enter floating-point value: ";
            cin >> value;

            cout << "Enter value to add: ";
            cin >> amount;

            cout << "Before modification: "
                 << value << endl;

            value =modify(value, amount);

            cout << "After modification: "
                 << value << endl;

            break;
        }

        case 3:
        {
            int value, amount;

            cout << "Enter integer value: ";
            cin >> value;

            cout << "Enter value to add: ";
            cin >> amount;

            cout << "Before modification: "
                 << value << endl;

            modify(&value, amount);

            cout << "After modification: "
                 << value << endl;

            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}