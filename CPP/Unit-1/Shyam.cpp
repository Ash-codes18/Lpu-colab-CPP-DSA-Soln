#include <iostream>
#include <vector>

int countOccurrences(std::vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int firstOccurrence = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            firstOccurrence = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (firstOccurrence == -1) {
        return 0;
    }

    int lastOccurrence = -1;

    left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            lastOccurrence = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return lastOccurrence - firstOccurrence + 1;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int target;
    std::cin >> target;

    int frequency = countOccurrences(arr, target);
    std::cout << frequency << std::endl;

    return 0;
}


/Sushant
