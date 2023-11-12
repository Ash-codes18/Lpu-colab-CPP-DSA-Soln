// You are using GCC
#include <iostream>
using namespace std;

#define V 4
#define INF 99999

void printSolution(int dist[][V]);

bool negCyclefloydWarshall(int graph[][V]) {
    int dist[V][V];

    // Initialize the distance matrix
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Applying Floyd-Warshall algorithm
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Checking for negative cycles
    for (int i = 0; i < V; i++) {
        if (dist[i][i] < 0) {
            return true; // Negative cycle detected
        }
    }

    return false; // No negative cycle found
}

int main() {
    int graph[V][V];

    // Taking input for the weighted directed graph
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    if (negCyclefloydWarshall(graph)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}