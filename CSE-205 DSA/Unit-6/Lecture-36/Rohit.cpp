#include <iostream>
using namespace std;

#define MAX_FLIGHTS 100

bool canCreateFlightSchedule(int n, int constraints[][2]) {
    // Create an adjacency matrix to represent the flight constraints
    bool adjMatrix[MAX_FLIGHTS][MAX_FLIGHTS] = {false};

    // Fill the adjacency matrix based on constraints
    for (int i = 0; i < n; ++i) {
        adjMatrix[constraints[i][1]][constraints[i][0]] = true;
    }

    // Use Warshall's Algorithm to detect cycles
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                adjMatrix[i][j] = adjMatrix[i][j] || (adjMatrix[i][k] && adjMatrix[k][j]);
            }
        }
    }

    // Check for cycles
    for (int i = 0; i < n; ++i) {
        if (adjMatrix[i][i]) {
            return false; // Cycle detected, cannot create flight schedule
        }
    }

    return true; // No cycle detected, can create flight schedule
}

int main() {
    int n;
    cin >> n;

    int constraints[MAX_FLIGHTS][2];
    for (int i = 0; i < n; ++i) {
        cin >> constraints[i][0] >> constraints[i][1];
    }

    if (canCreateFlightSchedule(n, constraints)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}