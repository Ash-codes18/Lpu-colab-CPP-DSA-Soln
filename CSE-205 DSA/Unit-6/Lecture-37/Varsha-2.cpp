#include <iostream>
#include <vector>

using namespace std;

const int INF = 10000000;

void printPath(vector<vector<int>>& next, int i, int j) {
    if (next[i][j] == -1) {
        cout << i << " -> " << j;
    } else {
        printPath(next, i, next[i][j]);
        cout << " -> " << j;
    }
}

void floydWarshall(vector<vector<int>>& graph, int V) {
    vector<vector<int>> dist = graph;
    vector<vector<int>> next(V, vector<int>(V, -1));

    // Applying Floyd-Warshall Algorithm
    for (int k = 0; k < V; ++k) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][j] > dist[i][k] + dist[k][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    next[i][j] = k;
                }
            }
        }
    }

    // Print the shortest path from the top-left to the bottom-right
    // cout << "Shortest Path from 0 to " << V - 1 << " : ";
    printPath(next, 0, V - 1);
    cout << endl;
}

int main() {
    int V;
    // cout << "Enter the number of vertices (V): ";
    cin >> V;

    // Input adjacency matrix
    vector<vector<int>> graph(V, vector<int>(V));
    // cout << "Enter the adjacency matrix (0 to 10000000):\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    // Apply Floyd-Warshall algorithm and print the result
    floydWarshall(graph, V);

    return 0;
}
