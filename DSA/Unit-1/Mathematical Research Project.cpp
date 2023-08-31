#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int common[MAX_SIZE];
    int commonSize = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                common[commonSize++] = arr1[i];
                break;
            }
        }
    }

    cout << "Common Elements: ";
    if (commonSize == 0) {
        cout << "None";
    } else {
        for (int i = 0; i < commonSize; i++) {
            cout << common[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    int size1, size2;

    cin >> size1;

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cin >> size2;

    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}
