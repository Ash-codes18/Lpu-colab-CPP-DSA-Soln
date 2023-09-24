// You are using GCC
#include <iostream>
#include <deque>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    deque<int> dq;
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        dq.push_back(num);
    }

    bool printAlternate = true;

    for (auto it = dq.begin(); it != dq.end(); it++) {
        if (printAlternate) {
            cout << *it << " ";
        }
        printAlternate = !printAlternate;
    }

    cout << endl;

    return 0;
}