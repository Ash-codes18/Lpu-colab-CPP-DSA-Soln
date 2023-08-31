#include <iostream>
#include <algorithm>

int* mergeArrays(const int* arr1, int size1, const int* arr2, int size2, int& mergedSize) {
    int maxSize = std::max(size1, size2);
    int* mergedArray = new int[maxSize];
    
    for (int i = 0; i < maxSize; i++) {
        int sum = 0;
        
        if (i < size1)
            sum -= arr1[i];
        
        if (i < size2)
            sum -= arr2[i];
        
        mergedArray[i] = sum;
    }
    
    mergedSize = maxSize;
    return mergedArray;
}

int main() {
    int size1, size2;
    std::cin >> size1;
    int* arr1 = new int[size1];
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }
    std::cin >> size2;
    int* arr2 = new int[size2];
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }
    
    int mergedSize = 0;
    int* mergedArray = mergeArrays(arr1, size1, arr2, size2, mergedSize);
    
    for (int i = 0; i < mergedSize; i++) {
        std::cout << mergedArray[i] << " ";
    }
    std::cout << std::endl;
    
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;
    
    return 0;
}

//Sushant

// So two question are there in which output are positive and negative 
// so just assign the sign
// sum -= arr1[i]; Line 12 
// sum -= arr2[i]; LIne15
// here respectively
