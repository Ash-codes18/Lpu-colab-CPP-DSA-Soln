#include <iostream>
using namespace std;

#define MAX_N 100

int findProminentFigure(int acquaintances[MAX_N][MAX_N], int n) {
    int *inDegree = new int[n]();  // Initialize in-degrees to zero

    // Calculate in-degrees for each person
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (acquaintances[j][i] == 1) {
                inDegree[i]++;
            }
        }
    }

    // Check for a prominent figure
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == n - 1) {
            delete[] inDegree;
            return i;
        }
    }

    delete[] inDegree;
    return -1;  // No prominent figure found
}

int main() {
    int n;
    cin >> n;

    int acquaintances[MAX_N][MAX_N];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> acquaintances[i][j];
        }
    }

    int prominentFigureIndex = findProminentFigure(acquaintances, n);
    if (prominentFigureIndex != -1) {
        cout << "A prominent figure is present at index " << prominentFigureIndex << ".";
    } else {
        cout << "There is no prominent figure in the group.";
    }

    return 0;
}