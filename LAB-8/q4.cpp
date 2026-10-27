#include <iostream>
using namespace std;

class Delivery {
public:
    virtual void estimateTime(double distance) = 0;
};

class BikeDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 20) * 60 + 5;

        cout << "Estimated Bike Delivery Time: "
             << time << " minutes" << endl;
    }
};

class DroneDelivery : public Delivery {
public:
    void estimateTime(double distance) override {
        double time = (distance / 40) * 60 + 2;

        cout << "Estimated Drone Delivery Time: "
             << time << " minutes" << endl;
    }
};

int main() {
    double distance;

    cout << "Enter delivery distance (in km): ";
    cin >> distance;

    if (distance < 0) {
        cout << "Invalid distance!" << endl;
        return 0;
    }

    BikeDelivery b;
    DroneDelivery d;

    b.estimateTime(distance);
    d.estimateTime(distance);

    return 0;
}