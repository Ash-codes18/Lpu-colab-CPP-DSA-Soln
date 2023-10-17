#include <iostream>
#include <vector>
#include <algorithm>

// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

// Custom comparator function for sorting based on set bits
bool compare(int a, int b) {
    int countA = countSetBits(a);
    int countB = countSetBits(b);
    
    if (countA == countB) {
        return a < b; // Sort in ascending order if set bits are equal
    }
    
    return countA < countB; // Sort based on set bits
}

// Function to sort the array based on set bits using Quick-Sort algorithm
void sortBySetBits(std::vector<int>& arr) {
    std::sort(arr.begin(), arr.end(), compare);
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    
    sortBySetBits(arr);
    
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
