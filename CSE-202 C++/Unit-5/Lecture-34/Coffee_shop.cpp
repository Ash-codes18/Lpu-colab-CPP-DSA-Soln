#include <iostream>

using namespace std;

class CoffeeShop {
public:
    virtual double calculateTotal() = 0;
    virtual ~CoffeeShop() {}
};

class CustomerOrder : public CoffeeShop {
private:
    double coffeePrice;
    double teaPrice;
    double pastryPrice;
    int coffeeQuantity;
    int teaQuantity;
    int pastryQuantity;

public:
    CustomerOrder(double coffeeP, int coffeeQ, double teaP, int teaQ, double pastryP, int pastryQ)
        : coffeePrice(coffeeP), coffeeQuantity(coffeeQ),
          teaPrice(teaP), teaQuantity(teaQ),
          pastryPrice(pastryP), pastryQuantity(pastryQ) {}

    double calculateTotal() {
        double totalCost = (coffeePrice * coffeeQuantity) + (teaPrice * teaQuantity) + (pastryPrice * pastryQuantity);
        return totalCost;
    }

    ~CustomerOrder() {}
};

int main() {
    double coffeePrice, teaPrice, pastryPrice;
    int coffeeQuantity, teaQuantity, pastryQuantity;

    cin >> coffeePrice >> coffeeQuantity;
    cin >> teaPrice >> teaQuantity;
    cin >> pastryPrice >> pastryQuantity;

    CoffeeShop* order = new CustomerOrder(coffeePrice, coffeeQuantity, teaPrice, teaQuantity, pastryPrice, pastryQuantity);

    double totalCost = order->calculateTotal();

    delete order;

    cout << "Total cost of the order is $" << totalCost << endl;

    return 0;
}
