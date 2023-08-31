#include <iostream>
#include <vector>
#include <algorithm>

int main() {
        int size1, size2;
        std::cin >> size1;
        std::vector<int> stock(size1);
            for (int i = 0; i < size1; ++i) {
        std::cin >> stock[i];
    }
        std::cin >> size2;
        std::vector<int> cart(size2);
            for (int i = 0; i < size2; ++i) {
        std::cin >> cart[i];
    }
        std::vector<int> merged(size1 + size2);
        std::merge(stock.begin(), stock.end(),
        cart.begin(), cart.end(), merged.begin());
        
        merged.erase(std::unique(merged.begin(),
        merged.end()), merged.end());
        
            for (int i = 0; i < merged.size(); ++i) {
        std::cout << merged[i];
            if (i < merged.size() - 1) {
        std::cout << " ";
    }  
                                                
        }
        std::cout << std::endl;
return 0;
}
