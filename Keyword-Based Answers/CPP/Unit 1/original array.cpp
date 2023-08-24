#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int position;
    std::cin >> position;

    if (position >= 1 && position <= n) {
        std::cout << "Original array: ";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        arr.erase(arr.begin() + position - 1);

        std::cout << "Updated array: ";
        for (int i = 0; i < arr.size(); i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid position!" << std::endl;
    }

    return 0;
}