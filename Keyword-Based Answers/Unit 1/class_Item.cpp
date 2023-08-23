#include <iostream>
#include <iomanip>
using namespace std;

class Item{
    private:
    int itemNumber;
    float cost;
    
    public:
    
    inline float getTotalCost(int quantity) const{
        return cost * quantity;
    }
    
    void setItem(int number, float itemCost){
        itemNumber =  number;
        cost = itemCost;
    }
};

int main ()
{
    int itemNumber, quantity;
    float cost;
    
    cin >> itemNumber >> cost >> quantity;
    Item item;
    item.setItem(itemNumber, cost);
    float totalCoat = item.getTotalCost(quantity);
    
    cout << fixed << setprecision(2);
    cout << "Total cost: "<< totalCoat << endl;
    return 0;
}
