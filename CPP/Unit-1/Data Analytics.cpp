#include <iostream>
#include <vector>
#include <algorithm>

int findSecondSmallest(std::vector<int> arr)
{
    std::sort(arr.begin(), arr.end());
    return arr[1];
}

int main()
{
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i<n; ++i)
    {
        std::cin>>arr[i];
        
    }
    
    int secondSmallest = findSecondSmallest(arr);
    std::cout<<"Second Smallest Element: " <<
    secondSmallest << std::endl;
    return 0;
}
