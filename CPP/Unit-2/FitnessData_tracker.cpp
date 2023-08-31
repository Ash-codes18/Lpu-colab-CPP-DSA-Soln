#include <iostream>
#include <string>

using namespace std;

class FitnessData {
public:
    string name;
    double weight;

    FitnessData(const string& n, double w) : name(n), weight(w) {}

    void updateWeight(double newWeight) {
        weight = newWeight;
    }
};

int main() {
    string name;
    double initialWeight, updatedWeight;

    cin >> name >> initialWeight >> updatedWeight;

    FitnessData meenaFitness(name, initialWeight);
    FitnessData* weightPtr = &meenaFitness;

    weightPtr->updateWeight(updatedWeight);

    cout << "Updated fitness information:" << endl;
    cout << "Name: " << meenaFitness.name << endl;
    cout << "Weight: " << meenaFitness.weight << endl;

    return 0;
}
