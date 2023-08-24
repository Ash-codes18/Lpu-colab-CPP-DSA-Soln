#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
int n = nums.size();
int i = n - 2;
while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;}
    if (i >= 0) {
    int j = n - 1;
    while (j >= 0 && nums[j] <= nums[i]) {
    j--;
}
std::swap(nums[i], nums[j]);
}
std::reverse(nums.begin() + i + 1, nums.end());
}
int main() {
int n;
std::cin >> n;
std::vector<int> nums(n);
for (int i = 0; i < n; ++i) {
std::cin >> nums[i];
                        }
nextPermutation(nums);
for (int i = 0; i < n; ++i) {                                                    
    std::cout << nums[i];
    if (i < n - 1) {
    std::cout << " ";
}
    }
                                            
return 0;
}
