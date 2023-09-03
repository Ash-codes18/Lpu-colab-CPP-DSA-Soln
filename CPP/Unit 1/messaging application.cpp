#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string message;
    std::getline(std::cin, message);

    for (int i = message.size() - 1; i >= 0; i--) {
        std::cout << std::setw(1) << std::noskipws << message[i];
    }

    return 0;
}
//sushant
