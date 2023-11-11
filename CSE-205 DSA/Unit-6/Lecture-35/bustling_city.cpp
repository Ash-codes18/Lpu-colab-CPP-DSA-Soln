#include <iostream>
using namespace std;

#define MAX_V 100

void enqueue(int* queue, int& rear, int vertex) {
    queue[++rear] = vertex;
}

int dequeue(int* queue, int& front) {
    return queue[++front];
}

void bfsOfGraph(int V, int adjList[MAX_V][MAX_V]) {
    int visited[MAX_V] = {0};
    int queue[MAX_V];
    int front = 0, rear = 0;

    int startVertex = 0;
    enqueue(queue, rear, startVertex);
    visited[startVertex] = 1;

    while (front < rear) {
        int currVertex = dequeue(queue, front);

        cout << currVertex << " ";

        for (int i = 0; i < V; ++i) {
            if (adjList[currVertex][i] == 1 && visited[i] == 0) {
                enqueue(queue, rear, i);
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