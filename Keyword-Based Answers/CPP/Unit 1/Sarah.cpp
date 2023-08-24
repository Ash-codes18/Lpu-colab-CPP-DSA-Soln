#include <iostream>
using namespace std;

void calculateDivisorSum(int num, int &sum) {
        sum = 0;
            for (int i = 1; i <= num; i++) {
                        if (num % i == 0) {
                                        sum += i;
                        }
            }
}

int main() {
        int num;
            cin >> num;
                
                    int sumOfDivisors;
                        calculateDivisorSum(num, sumOfDivisors);
                            
                                cout << " " << sumOfDivisors << endl;
                                    
                                        return 0;
}       
