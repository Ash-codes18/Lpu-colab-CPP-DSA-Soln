#include <iostream>

int countVowels(const char* input) {
    int count = 0;
    const char* ptr = input;

    while (*ptr != '\0') {
        const char* vowelPtr = "aeiouAEIOU";
        while (*vowelPtr != '\0') {
            if (*ptr == *vowelPtr) {
                count++;
                break;
            }
            vowelPtr++;
        }
        ptr++;
    }

    return count;
}

int main() {
    char input[1000];
    std::cin.getline(input, sizeof(input));

    int vowelCount = countVowels(input);
    std::cout << vowelCount << std::endl;

    return 0;
}
