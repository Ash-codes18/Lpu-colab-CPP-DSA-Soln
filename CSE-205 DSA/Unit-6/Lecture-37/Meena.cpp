// You are using GCC
#include <iostream>
using namespace std;

#define V 4
#define INF 99999

void printSolution(int dist[][V]);

bool negCyclefloydWarshall(int graph[][V]) {
    int dist[V][V];

    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    for (int i = 0; i < V; i++) {
        if (dist[i][i] < 0)
            return true;
    }

    return false;
}

int main() {
    int graph[V][V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    if (negCyclefloydWarshall(graph))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}