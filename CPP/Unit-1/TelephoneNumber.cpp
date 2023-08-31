#include <iostream>
#include <string>
class TelephoneNumber{
    private:
    std::string number;
    public:
    TelephoneNumber(const std ::string& num) : 
    number(num){}
    
    bool isValid() const{
        return number.length() == 10;
    }
};

int main()
{
    std::string input;
    std::cin>> input;
    
    TelephoneNumber phoneNumber(input);
    
    if (phoneNumber.isValid())
    {
        std::cout << "Valid telephone number!"<< std::endl;
        
    }else
    {
        std::cout << "Invalid telephone number!"<<std::endl;
    }
    return 0;
}
