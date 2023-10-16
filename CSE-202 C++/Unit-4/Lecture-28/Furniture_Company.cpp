#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Furniture {
protected:
    int price;
    string material;

public:
    Furniture() : price(0.0), material("") {}

    void setInfo(double p, const string& m) {
        price = p;
        material = m;
    }

    void displayInfo() {
        cout << fixed << setprecision(2);
        cout << "Price: $" << price << endl;
        cout << "Material: " << material << endl;
    }
};

class RecliningChair : public Furniture {
private:
    bool isElectric;

public:
    RecliningChair() : isElectric(false) {}

    void setInfo(double p, const string& m, bool electric) {
        Furniture::setInfo(p, m); // Call the base class's setInfo method
        isElectric = electric;
    }

    void displayInfo() {
        Furniture::displayInfo();
        cout << "Chair Type: " << (isElectric ? "Electric" : "Standard") << endl;
    }
};

class Bookshelf : public Furniture {
private:
    int numShelves;

public:
    Bookshelf() : numShelves(0) {}

    void setInfo(double p, const string& m, int shelves) {
        Furniture::setInfo(p, m); // Call the base class's setInfo method
        numShelves = shelves;
    }

    void displayInfo() {
        Furniture::displayInfo();
        cout << "Number of Shelves: " << numShelves << endl;
    }
};

int main() {
    double price;
    string material;
    char type;
    cin >> price;
    cin.ignore();  // Consume the newline character.
    getline(cin, material);
    cin >> type;

    if (type == 'C') {
        bool isReclining;
        cin >> isReclining;
        RecliningChair chair;
        chair.setInfo(price, material, isReclining);
        chair.displayInfo();
    }
    else if (type == 'T') {
        Furniture furniture;
        furniture.setInfo(price, material);
        furniture.displayInfo();
    }
    else if (type == 'B') {
        int numShelves;
        cin >> numShelves;
        Bookshelf bookshelf;
        bookshelf.setInfo(price, material, numShelves);
        bookshelf.displayInfo();
    }
    else {
        cout << "Invalid type!" << endl;
    }

    return 0;
}
