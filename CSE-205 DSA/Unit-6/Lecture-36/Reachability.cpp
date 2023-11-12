#include <iostream>
using namespace std;

// Function to check if there is a path from u to v
bool isReachable(int **graph, int u, int v, int n) {
    return graph[u][v] == 1;
}

// Function to compute reachability matrix using Warshall's Algorithm
void computeReachability(int **graph, int n) {
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                graph[i][j] = graph[i][j] || (graph[i][k] && graph[k][j]);
            }
        }
    }
}

int main() {
    int n, u, v;
    cin >> n;

    // Dynamically allocate memory for the adjacency matrix
    int **graph = new int *[n];
    for (int i = 0; i < n; ++i) {
        graph[i] = new int[n];
    }

    // Input the adjacency matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    // Compute reachability matrix
    computeReachability(graph, n);

    // Output the reachability matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    // Input the pair of vertices
    cin >> u >> v;

    // Check if there is a path from u to v
    if (isReachable(graph, u, v, n)) {
        cout << "There is a path from vertex " << u << " to vertex " << v << "." << endl;
    } else {
        cout << "There is no path from vertex " << u << " to vertex " << v << "." << endl;
    }

    // Deallocate memory
    for (int i = 0; i < n; ++i) {
        delete[] graph[i];
    }
    delete[] graph;

    return 0;
}