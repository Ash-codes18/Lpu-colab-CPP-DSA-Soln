#include <iostream>

enum class LetterType {
    Vowel,
    Consonant,
    Invalid
};

int main() {
    char input;
    std::cin >> input;

    LetterType type;

    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        switch (input) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                type = LetterType::Vowel;
                break;
            default:
                type = LetterType::Consonant;
                break;
        }
    } else {
        type = LetterType::Invalid;
    }

    switch (type) {
        case LetterType::Vowel:
            std::cout << "vowel" << std::endl;
            break;
        case LetterType::Consonant:
            std::cout << "consonant" << std::endl;
            break;
        case LetterType::Invalid:
            std::cout << "Invalid input" << std::endl;
            break;
    }

    return 0;
}
