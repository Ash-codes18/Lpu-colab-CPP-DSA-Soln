// You are using GCC
#include <iostream>
using namespace std;

void floydWarshall(int n, int graph[][100]) {
    int INF = 1e9;

    // Applying Floyd-Warshall algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][k] && graph[k][j])
                    graph[i][j] = 1;
            }
        }
    }

    // Checking if the graph is strongly connected
    bool isStronglyConnected = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && !graph[i][j]) {
                isStronglyConnected = false;
                break;
            }
        }
        if (!isStronglyConnected) {
            break;
        }
    }

    // Output
    if (isStronglyConnected) {
        cout << "The graph is strongly connected";
    } else {
        cout << "The graph is not strongly connected";
    }
}

int main() {
    int n;
    cin >> n;
    int graph[100][100];

    // Taking input for the adjacency matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    floydWarshall(n, graph);

    return 0;
}