#include <iostream>

// Inline function to check if a year is a leap year
inline bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int year;
   
    std::cin >> year;
    
    if (year > 0) {
        if (isLeapYear(year)) {
            std::cout << year << " is a leap year." << std::endl;
        } else {
            std::cout << year << " is not a leap year." << std::endl;
        }
    } else {
        std::cout << "Invalid year input." << std::endl;
    }
    
    return 0;
}
