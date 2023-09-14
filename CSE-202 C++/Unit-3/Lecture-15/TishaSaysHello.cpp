// You are using GCC
#include <iostream>
#include <string>

class Welcome
{
public:
    Welcome()
    {
        std::cout << "Welcome ";
    }
};

class Hello
{
public:
    Hello()
    {
        std::cout << "Hello ";
    }
};

int main()
{
    std::string name;
    std::cin >> name;

    Welcome welcome;
    std::cout << name << std::endl;
    Hello hello;
    std::cout << name << std::endl;

    return 0;
}