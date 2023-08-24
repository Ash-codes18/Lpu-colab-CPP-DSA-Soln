#include <iostream>
#include <string>

const int MAX_SIZE = 100;

int main() {
    int size;
    std::string array[MAX_SIZE];
    std::string searchStr;


    std::cin >> size;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    std::cin.ignore(); 
    std::getline(std::cin, searchStr);

    int foundIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (array[i] == searchStr) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        std::cout << foundIndex << std::endl;
    } else {
        std::cout << "String not found!" << std::endl;
    }

    return 0;
}
//Sushant
