#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::vector<int> modifiedArr(n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            modifiedArr[i] = arr[i] * arr[i + 1];
        }
        else if (i == n - 1)
        {
            modifiedArr[i] = arr[i] * arr[i - 1];
        }
        else
        {
            modifiedArr[i] = arr[i - 1] * arr[i + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << modifiedArr[i] << " ";
    }

    return 0;
}