#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& playlist, int target) {
    int left = 0;
    int right = playlist.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (playlist[mid] == target) {
            return mid; 
        } else if (playlist[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left; 
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> playlist(n);
    for (int i = 0; i < n; i++) {
        std::cin >> playlist[i];
    }

    int target;
    std::cin >> target;

    int index = binarySearch(playlist, target);
    std::cout << index << std::endl;

    return 0;
}

//Sushant
