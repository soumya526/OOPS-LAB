#include <iostream>
using namespace std;

class IrrigationSystem {
public:
    virtual void calculateWater(double moisture) = 0;
};

class DripIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 2 * (100 - moisture);

        cout << "Water required for Drip Irrigation: "
             << water << " litres" << endl;
    }
};

class SprinklerIrrigation : public IrrigationSystem {
public:
    void calculateWater(double moisture) override {
        double water = 3 * (100 - moisture);

        cout << "Water required for Sprinkler Irrigation: "
             << water << " litres" << endl;
    }
};

int main() {
    DripIrrigation d;
    SprinklerIrrigation s;

    double moisture;

    cout << "Enter soil moisture percentage (0-100): ";
    cin >> moisture;

    if (moisture < 0 || moisture > 100) {
        cout << "Invalid moisture percentage!" << endl;
        return 0;
    }

    d.calculateWater(moisture);
    s.calculateWater(moisture);

    return 0;
}