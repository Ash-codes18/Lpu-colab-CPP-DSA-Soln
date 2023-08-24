#include <iostream>
#include<vector>
#include <algorithm>
int main()
{
    int K;
    std::cin >> K;
    
    std::vector<std::vector<int>>arrays(K);
    for(int i = 0; i < K; ++i)
    {
        int n;
        std::cin>>n;
        arrays[i].resize(n);
        
        for (int j = 0; j < n; ++j)
        {
            std::cin>> arrays[i][j];
        }
    }
    
    std::vector<int> mergedArray;
    for(const std::vector<int>& arr : arrays)
    {
        mergedArray.insert(mergedArray.end(), arr.begin(), arr.end());
    }
    
    std::sort(mergedArray.begin(), mergedArray.end(), std::greater<int>());
    for(int num : mergedArray)
    {
        std::cout << num << " ";
    }
    
    return 0;
}
