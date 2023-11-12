#include <iostream>
#include <climits>
using namespace std;

#define INF 1000000000
#define MAXN 100

int main() {
    int n, m;
    cin >> n >> m;

    int graph[MAXN][MAXN];

    // Initialize the graph with INF distances
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                graph[i][j] = 0;
            } else {
                graph[i][j] = INF;
            }
        }
    }

    // Input the directed edges with capacities
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u][v] = w;
    }

    int source, sink;
    cin >> source >> sink;

    // Floyd-Warshall Algorithm
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][k] != INF && graph[k][j] != INF && graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    // Check if the sink node is unreachable from the source node
    if (graph[source][sink] == INF) {
        cout << "Nodes are unreachable. Maximum flow is 0." << endl;
    } else {
        cout << "Maximum flow from node " << source << " to " << sink << " is: " << graph[source][sink] << endl;
    }

    return 0;
}