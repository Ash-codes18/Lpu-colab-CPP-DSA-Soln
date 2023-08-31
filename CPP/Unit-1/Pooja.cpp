#include <iostream>
#include <vector>
#include<algorithm>
int main(){
    int n, m;
    std::cin>>n;
    std::vector<int> arr1(n);
    for (int i = 0; i < n; ++i)
    {
        std::cin >>arr1[i];
    }
    
    std::cin>>m;
    std::vector<int> arr2(m);
    for(int i = 0; i <m; ++i)
    {
        std::cin >> arr2[i];
    }
    
    std::vector<int> merged(arr1.begin(), arr1.end());
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    
    int minIngredient =* std::min_element(merged.begin(), merged.end());
    std::cout<<minIngredient<<std::endl;
    return 0;
}

//Sushant
