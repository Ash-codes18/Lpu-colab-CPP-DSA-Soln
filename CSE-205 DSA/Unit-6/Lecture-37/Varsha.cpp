#include <iostream>
using namespace std;

#define INF 1e7
#define MAXN 100

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];

void initialise(int V, int graph[MAXN][MAXN]) {
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            dis[i][j] = graph[i][j];
            if (graph[i][j] == INF)
                Next[i][j] = -1;
            else
                Next[i][j] = j;
        }
    }
}

void floydWarshall(int V) {
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dis[i][k] + dis[k][j] < dis[i][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
}

void printPath(int source, int destination) {
    if (dis[source][destination] == INF) {
        cout << "No path exists from source to destination." << endl;
        return;
    }

    cout << "Shortest path from Source to destination " << destination << ": ";
    int currentNode = source;

    while (currentNode != destination) {
        cout << currentNode << " -> ";
        currentNode = Next[currentNode][destination];
    }

    cout << destination << endl;
}

int main() {
    int V;
    cin >> V;

    int graph[MAXN][MAXN];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }

    initialise(V, graph);
    floydWarshall(V);

    int destination;
    cin >> destination;

    printPath(0, destination);

    return 0;
}