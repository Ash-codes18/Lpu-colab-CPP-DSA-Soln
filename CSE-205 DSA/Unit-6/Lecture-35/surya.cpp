#include <iostream>
#include <stack>
using namespace std;

#define MAX_VERTICES 100

void addEdge(int adj[MAX_VERTICES][MAX_VERTICES], int v, int w) {
    adj[v][w] = 1;
}

void DFS(int adj[MAX_VERTICES][MAX_VERTICES], int visited[MAX_VERTICES], int V, int v) {
    stack<int> s;
    s.push(v);

    while (!s.empty()) {
        v = s.top();
        s.pop();

        if (!visited[v]) {
            cout << v << " ";
            visited[v] = 1;
        }

        for (int i = V - 1; i >= 0; --i) {
            if (adj[v][i] && !visited[i]) {
                s.push(i);
            }
        }
    }
}

int main() {
    int V, E;
    cin >> V;
    cin >> E;
    int adj[MAX_VERTICES][MAX_VERTICES] = {0};
    int visited[MAX_VERTICES] = {0};

    for (int i = 0; i < E; ++i) {
        int v, w;
        cin >> v >> w;
        addEdge(adj, v, w);
    }

    int startVertex;
    cin >> startVertex;
    cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
    DFS(adj, visited, V, startVertex);

    return 0;
}