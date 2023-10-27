#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(const string& make, const string& model, int year)
        : make(make), model(model), year(year) {}

    void setMake(const string& make) {
        this->make = make;
    }

    void setModel(const string& model) {
        this->model = model;
    }

    void setYear(int year) {
        this->year = year;
    }

    string getMake() const {
        return make;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    virtual int findSpeed() {
        return 0;
    }
};

class SportsCar : public Car {
private:
    int maxSpeed;

public:
    SportsCar(const string& make, const string& model, int year, int maxSpeed)
        : Car(make, model, year), maxSpeed(maxSpeed) {}

    int findSpeed() override {
        return maxSpeed;
    }
};

int main() {
    string make, model;
    int year, maxSpeed;

    getline(cin, make);
    getline(cin, model);
    cin >> year >> maxSpeed;

    Car car(make, model, year);
    SportsCar sportsCar(make, model, year, maxSpeed);

    cout << "Make of the car is: " << car.getMake() << endl;
    cout << "Model of the car is: " << car.getModel() << endl;
    cout << "Year of the car is: " << car.getYear() << endl;
    cout << "Speed of the sports car is: " << sportsCar.findSpeed() << " km/h" << endl;

    return 0;
}
