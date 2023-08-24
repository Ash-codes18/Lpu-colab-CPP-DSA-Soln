#include <iostream>
#include <iomanip> 

using namespace std;

class Car {
private:
    string brand;
    double fuelConsumption;

public:
    Car(string carBrand, double consumption) : brand(carBrand), fuelConsumption(consumption) {}

    friend double calculateFuelCost(const Car& car, double distance, double fuelPrice) {
        double fuelUsed = (car.fuelConsumption / 100.0) * distance;
        return fuelUsed * fuelPrice;
    }
};

int main() {
    string carBrand;
    double fuelConsumption, distance, fuelPrice;
    cin >> carBrand >> fuelConsumption >> distance >> fuelPrice;

    Car car(carBrand, fuelConsumption);
    double totalFuelCost = calculateFuelCost(car, distance, fuelPrice);

    cout << fixed << setprecision(2);
    cout << totalFuelCost << endl;

    return 0;
}
