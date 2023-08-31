#include <iostream>
#include <iomanip> 

using namespace std;

double calculateSpeed(double distance, double time) {
    return distance / time;
}

double calculateSpeed(double distance, double time, double acceleration) {
    return (distance / time) + (acceleration * time);
}

int main() {
    double distance, time, trainAcceleration, planeAcceleration;
    cin >> distance >> time >> trainAcceleration >> planeAcceleration;

    double carSpeed = calculateSpeed(distance, time);
    double trainSpeed = calculateSpeed(distance, time, trainAcceleration);
    double planeSpeed = calculateSpeed(distance, time, planeAcceleration);

    cout << fixed << setprecision(2);

    cout << carSpeed << endl;
    cout << trainSpeed << endl;
    cout << planeSpeed << endl;

    return 0;
}
