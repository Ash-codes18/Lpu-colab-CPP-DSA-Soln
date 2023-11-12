#include <iostream>
#include <vector>

using namespace std;

void printReachabilityMatrix(vector<vector<int>>& reachabilityMatrix) {
    int N = reachabilityMatrix.size();

    // cout << "Reachability Matrix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << reachabilityMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

void warshallAlgorithm(vector<vector<int>>& graph, vector<vector<int>>& reachabilityMatrix) {
    int N = graph.size();

    // Initialize the reachability matrix with the given graph
    reachabilityMatrix = graph;

    // Applying Warshall's Algorithm
    for (int k = 0; k < N; ++k) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                reachabilityMatrix[i][j] = reachabilityMatrix[i][j] || (reachabilityMatrix[i][k] && reachabilityMatrix[k][j]);
            }
        }
    }
}

int main() {
    int N;
    // cout << "Enter the number of vertices (N): ";
    cin >> N;

    // Input adjacency matrix
    vector<vector<int>> graph(N, vector<int>(N, 0));
    // cout << "Enter the adjacency matrix (0 or 1):\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> graph[i][j];
        }
    }

    // Compute reachability matrix using Warshall's Algorithm
    vector<vector<int>> reachabilityMatrix;
    warshallAlgorithm(graph, reachabilityMatrix);

    // Print the reachability matrix
    printReachabilityMatrix(reachabilityMatrix);

    return 0;
}
