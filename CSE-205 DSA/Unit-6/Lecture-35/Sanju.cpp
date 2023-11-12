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
    int queue[MAX_V] = {0};
    int front = -1, rear = -1;
    int visited[MAX_V] = {0};

    int startVertex;
    cin >> startVertex;

    enqueue(queue, rear, startVertex);
    visited[startVertex] = 1;

    while (front != rear) {
        int currentVertex = dequeue(queue, front);
        cout << currentVertex << " ";

        for (int i = 0; i < V; ++i) {
            if (adjList[currentVertex][i] && !visited[i]) {
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