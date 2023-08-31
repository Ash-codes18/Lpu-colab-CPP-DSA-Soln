#include <iostream>
#include <string>
int main()
{
    const int MAX_SIZE = 100;
    int n;
    std::cin>>n;
    std::string strings[MAX_SIZE];
    for(int i = 0; i < n; ++i)
    {
        std:: cin>> strings[i];
    }
    
    std::string searchString;
    std::cin>> searchString;
    int foundIndex =  -1;
    for(int i = 0; i < n; ++i)
    {
        if (strings[i] == searchString)
        {
            foundIndex = i;
            break;
        }
    }
    
    if (foundIndex != -1)
    {
        std::cout<<foundIndex << std::endl;
        }else{
            std::cout<<"String not found!"<<std::endl;
        }
        return 0;
    }

