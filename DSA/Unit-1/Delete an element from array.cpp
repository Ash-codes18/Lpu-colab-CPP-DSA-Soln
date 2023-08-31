// You are using GCC
#include <iostream>

int main() {
const int MAX_SIZE = 100;
int n;
std::cin >> n;
int arr[MAX_SIZE];
for (int i = 0; i < n; ++i) {
 std::cin >> arr[i];}
 int position;
std::cin >> position;
std::cout << "Original array:";
for(int i = 0; i< n; ++i){
    std::cout<< " "<< arr[i];}
    std::cout <<std::endl;
if (position < 1 || position > n) {
std::cout << "Invalid position!" << std::endl;
} else {
for (int i = position -1; i < n -1; ++i) {
arr[i] = arr[i+1];
}
n--;
std::cout << "Updated array:";
       for (int i = 0; i < n; ++i) {
        std::cout << " " <<arr[i];}
    
             std::cout << std::endl;}
              return 0;
}
