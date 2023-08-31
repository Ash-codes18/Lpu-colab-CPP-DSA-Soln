#include <iostream>
int main()
{
    const int MAX_SIZE = 100;
    int n;
    std::cin>>n;
    
    int arr[MAX_SIZE];
    for(int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }
    
    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        sum +=arr[i];
    }
    
    std::cout <<sum<<std::endl;
    return 0;
}
