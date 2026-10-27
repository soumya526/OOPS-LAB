#include <iostream>
using namespace std;

class SecurityScanner {
public:
    virtual void scan(int threats) = 0;
};

class BasicScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        cout << "\nBasic Scanner:" << endl;
        cout << "Threats detected: " << threats << endl;
    }
};

class AdvancedScanner : public SecurityScanner {
public:
    void scan(int threats) override {
        int removed = threats * 90 / 100;
        int remaining = threats - removed;

        cout << "\nAdvanced Scanner:" << endl;
        cout << "Threats detected: " << threats << endl;
        cout << "Threats removed: " << removed << endl;
        cout << "Threats remaining: " << remaining << endl;
    }
};

int main() {
    int threats;

    cout << "Enter the number of threats detected: ";
    cin >> threats;

    if (threats < 0) {
        cout << "Invalid number of threats!" << endl;
        return 0;
    }

    BasicScanner b;
    AdvancedScanner a;

    b.scan(threats);
    a.scan(threats);

    return 0;
}