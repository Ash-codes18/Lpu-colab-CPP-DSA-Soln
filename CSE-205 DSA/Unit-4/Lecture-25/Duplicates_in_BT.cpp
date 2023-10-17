#include <iostream>
using namespace std;

int main() {
    int arr[9];

    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
    }

    int flag = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[i] == arr[j] && arr[i] != -1 && i != j) {
                flag = 1;
                cout << "Yes";
                break; 
            }
        }
        if (flag) {
            break;  
        }
    }

    if (!flag) {
        cout << "No";
    }

    return 0;
}
