#include <iostream>
#include <string>
using namespace std;

class Salesperson {
private:
    string name;
    int numMonths;
    int* sales;

public:
    void setDetails() {
        getline(cin, name);
        cin >> numMonths;
        sales = new int[numMonths];
        for (int i = 0; i < numMonths; i++) {
            cin >> sales[i];
        }
    }

    int calculateTotalSales() {
        int totalSales = 0;
        for (int i = 0; i < numMonths; i++) {
            totalSales += sales[i];
        }
        return totalSales;
    }

    int calculateAverageSales() {
        return calculateTotalSales() / numMonths;
    }

    void displayDetails() {
        cout << "Salesperson Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Sales: " << calculateTotalSales() << endl;
        cout << "Average Sales: " << calculateAverageSales() << endl;
    }
};

int main() {
    Salesperson sp;
    sp.setDetails();
    sp.displayDetails();
    return 0;
}
