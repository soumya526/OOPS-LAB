#include <iostream>
using namespace std;

class SecuritySystem;   // Forward declaration

class Door
{
private:
    int DoorNumber;
    bool LockStatus;

public:
    Door(int number, bool status)
    {
        DoorNumber = number;
        LockStatus = status;
    }

    // Declare SecuritySystem as a friend class
    friend class SecuritySystem;
};

class SecuritySystem
{
public:
    void checkLockStatus(Door d)
    {
        cout << "Door Number: " << d.DoorNumber << endl;

        if (d.LockStatus)
            cout << "Door Status: Locked" << endl;
        else
            cout << "Door Status: Unlocked" << endl;
    }
};

int main()
{
    int number;
    bool status;

    cout << "Enter Door Number: ";
    cin >> number;

    cout << "Enter Lock Status (1 for Locked, 0 for Unlocked): ";
    cin >> status;

    Door d(number, status);

    SecuritySystem security;
    security.checkLockStatus(d);

    return 0;
}