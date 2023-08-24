#include <iostream>
using namespace std;
int sum (int arr[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; ++i)
    {
        totalSum += arr[i];
    }
    
    return totalSum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    
    int result = sum(arr, n);
    
    cout << result <<endl;
    
    return 0;
}


//sushant
