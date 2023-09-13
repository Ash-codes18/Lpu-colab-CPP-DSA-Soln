#include <iostream>
#include <stack>

bool isValidMathExpression(const char* expression) {
        std::stack<char> stack;
        
        for (int i = 0; expression[i] != '\0'; ++i) {
        char currentChar = expression[i];
        if (currentChar == '(' || currentChar == '{') {
        stack.push(currentChar);
        } else if (currentChar == ')' || currentChar == '}') {
        if (stack.empty() || (currentChar == ')' && stack.top() != '(') || (currentChar == '}' && stack.top() != '{')) {
        return false;}
        stack.pop();
        } else if (currentChar == '+' || currentChar == '-' || currentChar == '*' || currentChar == '/') {
        if (i == 0 || expression[i - 1] == '(' || expression[i - 1] == '{' || expression[i + 1] == '\0' || expression[i + 1] == ')' || expression[i + 1] == '}' || expression[i + 1] == '+' || expression[i + 1] == '-' || expression[i + 1] == '*' || expression[i + 1] == '/') {
        return false;}
        } else if (currentChar >= '0' && currentChar <= '9') {
        } else if (currentChar != ' ' && currentChar != '\t') {
        return false;
        }
    }
    return stack.empty();
}

int main() {
    char expression[1000];
    std::cin.getline(expression, sizeof(expression));
    if (isValidMathExpression(expression)) {
    std::cout << "Valid mathematical expression." << std::endl;
    } else {
    std::cout << "Invalid mathematical expression." << std::endl;}
    return 0;
}