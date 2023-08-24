#include <iostream>
#include <string>
#include <cctype>

class phone_number
{
private:
    std::string num;

    inline bool check_num(std::string num)
    {
        if (num.length() != 10)
        {
            return false;
        }

        for (char c : num)
        {
            if (!isdigit(c))
            {
                return false;
            }
        }

        return true;
    }

public:
    void input_num()
    {
        std::cout << "";
        std::cin >> num;

        if (check_num(num))
        {
            std::cout << "Your entered number is: " << num << std::endl;
        }
        else
        {
            std::cout << "Entered Phone number is wrong" << std::endl;
            if (!num.empty())
            {
                std::cout << "Your entered number is: " << num << std::endl;
            }
        }
    }
};

int main()
{
    phone_number num;
    num.input_num();
    return 0;
}