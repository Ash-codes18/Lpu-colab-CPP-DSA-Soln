#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    if (n >= 2)
    {
        std::cout << "Second Smallest Element: " << arr[1] << std::endl;
    }
    else
    {
        std::cout << "Array size should be at least 2." << std::endl;
    }
    return 0;
}
//sushant