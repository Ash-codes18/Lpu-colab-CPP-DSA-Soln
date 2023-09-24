// You are using GCC
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> dq;
    int input;
    
    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        dq.push_back(input);
    }

    int count = 0;
    bool alternate = false;
    
    for (int num : dq) {
        if (alternate) {
            count++;
        }
        alternate = !alternate;
    }

    cout << "Number of alternate elements in the deque: " << count << endl;
    
    return 0;
}