#include <iostream>

inline int sumOfSquaresEven(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (2 * i) * (2 * i);
    }
    return sum;
}

inline int sumOfSquaresOdd(int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += (2 * i + 1) * (2 * i + 1);
    }
    return sum;
}

int main()
{
    int N;
    std::cin >> N;

    int evenSum = sumOfSquaresEven(N);
    int oddSum = sumOfSquaresOdd(N);

    std::cout << evenSum << std::endl;
    std::cout << oddSum << std::endl;

    return 0;
}