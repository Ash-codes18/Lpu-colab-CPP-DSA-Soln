#include <iostream>
#include <vector>

int main() {
    int size;
    std::cin >> size;

    std::vector<int> arr(size);

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int position, value;
    std::cin >> position >> value;

    if (position >= 1 && position <= size + 1) {
        arr.insert(arr.begin() + position - 1, value);

        std::cout << "Original array:";
        for (int i = 0; i < size; i++) {
            std::cout << " " << arr[i];
        }
        std::cout << std::endl;

        std::cout << "Updated array:";
        for (int i = 0; i < arr.size(); i++) {
            std::cout << " " << arr[i];
        }
        std::cout << std::endl;
    } else {
        std::cout << "Original array:";
        for (int i = 0; i < size; i++) {
            std::cout << " " << arr[i];
        }
        std::cout << std::endl;

        std::cout << "Invalid position!" << std::endl;
    }

    return 0;
}
