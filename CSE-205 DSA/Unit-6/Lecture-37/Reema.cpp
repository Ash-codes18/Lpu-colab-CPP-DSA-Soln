// ONly 3 test case running

#include <iostream>
#include <vector>

using namespace std;

const int INF = 1e7;

void printPath(vector<vector<int>>& next, int start, int dest) {
    cout << "Shortest path from Earth to planet " << dest << ": ";
    if (next[start][dest] == -1) {
        cout << start ;
        if(dest>0){
            cout<< " -> " << dest;
        }
    } else {
        cout << start;
        int current = start;
        while (current != dest) {
            cout << " -> " << next[current][dest];
            current = next[current][dest];
        }
        cout << " -> " << dest;
    }
    cout << endl;
}

void floydWarshall(vector<vector<int>>& graph, int V, int dest) {
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

    // Print the shortest path from Earth to the destination planet
    printPath(next, 0, dest);
}

int main() {
    int V;
    // cout << "Enter the number of planets in the galaxy (V): ";
    cin >> V;

    // Input distance matrix
    vector<vector<int>> graph(V, vector<int>(V));
    // cout << "Enter the distance matrix (0 to 10^7):\n";
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cin >> graph[i][j];
        }
    }

    int dest;
    // cout << "Enter the index of the destination planet: ";
    cin >> dest;

    // Apply Floyd-Warshall algorithm and print the result
    floydWarshall(graph, V, dest);

    return 0;
}
