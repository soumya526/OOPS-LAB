#include <iostream>
using namespace std;

class CloudResource {
public:
    virtual void calculateCost(double cpuHours) = 0;
};

class StandardInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 5;

        if (cpuHours > 100) {
            cost = cost - (15 * cost / 100);
        }

        cout << "Standard Instance Cost: Rs. " << cost << endl;
    }
};

class PremiumInstance : public CloudResource {
public:
    void calculateCost(double cpuHours) override {
        double cost = cpuHours * 12;

        if (cpuHours > 100) {
            cost = cost - (15 * cost / 100);
        }

        cout << "Premium Instance Cost: Rs. " << cost << endl;
    }
};

int main() {
    double cpuHours;

    cout << "Enter CPU usage in hours: ";
    cin >> cpuHours;

    if (cpuHours < 0) {
        cout << "Invalid CPU hours!" << endl;
        return 0;
    }

    StandardInstance s;
    PremiumInstance p;

    s.calculateCost(cpuHours);
    p.calculateCost(cpuHours);

    return 0;
}