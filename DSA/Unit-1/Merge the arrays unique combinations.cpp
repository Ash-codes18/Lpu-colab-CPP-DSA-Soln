#include <iostream>
#include <string>
using namespace std;

int main() {
    int size1;
    cin >> size1;

    string arr1[size1];
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int size2;
    cin >> size2;

    string arr2[size2];

    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    string mergedArr[size1 * size2];
    int count = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            string combination = arr1[i] + arr2[j];
            bool isUnique = true;
            for (int k = 0; k < count; k++) {
                if (mergedArr[k] == combination) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                mergedArr[count] = combination;
                count++;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Sushant
