// You are using GCC
#include <iostream>
using namespace std;
class Shop{
  public:
    double totalSales = 0;
    
    void addSales(double salesAmount){
        totalSales += salesAmount;
    }
};

int main(){
    Shop shop;
    int n, i;
    cin >> n;
    for(i = 0; i<n; i++){
        double amt;
        cin >> amt;
        shop.addSales(amt);
    }
    
    printf("Total Sales: %.2f", shop.totalSales);
}

