#include <iostream>

class Box {
private:
    double length;

public:
    Box() : length(0) {}  

    void get() {
        std::cin >> length; 
    }

    friend double printVolume(const Box& box); 
};

double printVolume(const Box& box) {
    double volume = box.length * box.length * box.length;
    return volume;
}

int main() {
    Box customBox;
    customBox.get();  
    double volume = printVolume(customBox);  
    std::cout << volume << std::endl;  
    return 0;
}
