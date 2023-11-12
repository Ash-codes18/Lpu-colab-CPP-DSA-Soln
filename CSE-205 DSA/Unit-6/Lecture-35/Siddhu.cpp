// You are using GCC
#include <iostream>
#include <queue>
using namespace std;
#define MAX_V 100

void bfsOfGraph(int V, int adjList[MAX_V][MAX_V]) {
    int queue[MAX_V] = {0};
    int front = -1, rear = -1;
    int visited[MAX_V] = {0};

    int startVertex;
    cin >> startVertex;

    queue[++rear] = startVertex;
    visited[startVertex] = 1;

    while (front != rear) {
        int currentVertex = queue[++front];
        cout << currentVertex << " ";

        for (int i = 0; i < V; ++i) {
            if (adjList[currentVertex][i] && !visited[i]) {
                queue[++rear] = i;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;
    int adjList[MAX_V][MAX_V] = {0};

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adjList[u][v] = 1;
    }

    bfsOfGraph(V, adjList);

    return 0;
}