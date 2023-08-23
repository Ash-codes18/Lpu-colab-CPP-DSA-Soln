#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    double number;
    std::cin >> number;

    std::ostringstream formattedOutput;
    formattedOutput << std::scientific << std::setprecision(6) << number;

    std::string outputStr = formattedOutput.str();

    if (outputStr.find_first_of("eE") == std::string::npos) {
        outputStr.insert(outputStr.find_first_of("0123456789"), "e+00");
    }

    std::cout << outputStr << std::endl;

    return 0;
}
//sushant
