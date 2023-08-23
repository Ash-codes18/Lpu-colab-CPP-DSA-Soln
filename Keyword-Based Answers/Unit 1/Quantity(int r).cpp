#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Icecream {
public:
    void Quantity(int r) {
        double volume = r * r * r;
        cout << fixed << setprecision(2) << volume << endl;
    }
    
    void Quantity(int r, int h) {
        double volume = 0.33 * M_PI * r * r * h;
        cout << fixed << setprecision(2) << volume << endl;
    }
};

int main() {
    int choice;
    cin >> choice;
    
    Icecream ice;
    
    if (choice == 1) {
        int side;
        cin >> side;
        ice.Quantity(side);
    } else if (choice == 2) {
        int radius, height;
        cin >> radius >> height;
        ice.Quantity(radius, height);
    }
    
    return 0;
}
