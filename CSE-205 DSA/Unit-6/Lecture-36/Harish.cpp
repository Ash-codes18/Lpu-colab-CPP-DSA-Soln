//failing 1 test case

#include <iostream>
using namespace std;

// A function to print the matrix of connections
void printMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

// A function to find the transitive closure using Warshall's Algorithm
void warshall(int** matrix, int n) {
    // Loop through all nodes as intermediate nodes
    for (int k = 0; k < n; k++) {
        // Loop through all pairs of nodes
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // If there is a path from i to k and from k to j, then there is a path from i to j
                matrix[i][j] = matrix[i][j] || (matrix[i][k] && matrix[k][j]);
            }
        }
    }
}

// The main function
int main() {
    // Read the number of nodes
    int n;
    cin >> n;

    // Allocate memory for the matrix of connections
    int** matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[n];

    // Read the matrix of connections
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    // Read the source and target nodes
    int source, target;
    cin >> source >> target;

    // Find the transitive closure using Warshall's Algorithm
    warshall(matrix, n);

    // Check if there is a path from source to target
    if (matrix[source][target])
        cout << "Yes\n";
    else
        cout << "No\n";

    // Free the memory allocated for the matrix
    for (int i = 0; i < n; i++)
        delete[] matrix[i];
    delete[] matrix;

    return 0;
}
