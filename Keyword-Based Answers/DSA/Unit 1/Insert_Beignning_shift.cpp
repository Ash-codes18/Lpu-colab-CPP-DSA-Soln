#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int n;
    std::cin >> n;
    
    int arr[MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    int newValue;
    std::cin >> newValue;
    
    std::cout << "Original array:";
    for (int i = 0; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    
    for (int i = n - 1; i >= 0; --i) {
        arr[i + 1] = arr[i];
    }
    arr[0] = newValue;
    
    std::cout << "Updated array:";
    for (int i = 0; i <= n; ++i) {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
    
    return 0;
}
