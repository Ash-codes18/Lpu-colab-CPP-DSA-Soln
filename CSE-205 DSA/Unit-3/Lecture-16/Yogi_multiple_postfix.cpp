#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return -1;
}

bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

string infixToPostfix(string infix)
{
    string postfix;
    stack<char> stack;

    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == ' ' || infix[i] == '\t')
            continue;

        if (isalnum(infix[i]))
            postfix += infix[i];

        else if (infix[i] == '(')
            stack.push(infix[i]);

        else if (infix[i] == ')')
        {
            while (!stack.empty() && stack.top() != '(')
            {
                postfix += stack.top();
                stack.pop();
            }
            if (!stack.empty() && stack.top() != '(')
                return "Invalid Expression";
            else
                stack.pop();
        }

        else if (isOperator(infix[i]))
        {
            while (!stack.empty() && precedence(stack.top()) >= precedence(infix[i]))
            {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(infix[i]);
        }
    }

    while (!stack.empty())
    {
        if (stack.top() == '(')
            return "Invalid Expression";
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

int main()
{

    int n;
    cin >> n;
     cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string infix;
        getline(cin, infix);
        string postfix = infixToPostfix(infix);
        cout << "Postfix expression " << i + 1 << ": " << postfix << endl;
    }
    return 0;
}
