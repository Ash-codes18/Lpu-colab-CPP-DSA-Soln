#include <iostream>
#include <iomanip>

class Item
{
private:
    int itemNumber;
    float cost;

public:
    void setDetails(int number, float itemCost)
    {
        itemNumber = number;
        cost = itemCost;
    }

    inline float calculateTotalCost(int quantity)
    {
        return cost * quantity;
    }
};

int main()
{
    Item item;
    int number, quantity;
    float itemCost;

    std::cin >> number >> itemCost >> quantity;

    item.setDetails(number, itemCost);
    float totalCost = item.calculateTotalCost(quantity);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total cost: " << totalCost << std::endl;

    return 0;
}