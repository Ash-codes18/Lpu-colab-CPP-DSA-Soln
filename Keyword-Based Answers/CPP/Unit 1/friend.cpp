#include <iostream>

class Box {
private:
    double length;

public:
    Box() : length(0) {}

    void get() {
        std::cin >> length;
    }

    friend void printVolume(Box);
};

void printVolume(Box box) {
    double volume = box.length * box.length * box.length;
    std::cout << "" << volume << std::endl;
}

int main() {
    Box customBox;
    customBox.get();
    printVolume(customBox);

    return 0;
}
//sushant
