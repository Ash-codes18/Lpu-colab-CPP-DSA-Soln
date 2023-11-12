#include <iostream>
#include <queue>
#include <climits>
using namespace std;

void add_edge(int adj[][100], int src, int dest) {
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

bool BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[]) {
    queue<int> q;
    bool visited[v];
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[src] = true;
    dist[src] = 0;
    q.push(src);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int i = 0; i < v; i++) {
            if (adj[u][i] && !visited[i]) {
                visited[i] = true;
                dist[i] = dist[u] + 1;
                pred[i] = u;
                q.push(i);

                if (i == dest)
                    return true;
            }
        }
    }

    return false;
}

void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[]) {
    if (!BFS(adj, s, dest, v, pred, dist)) {
        cout << "No path exists" << endl;
        return;
    }

    int path[v];
    int crawl = dest;
    int pathLength = 0;
    path[pathLength++] = crawl;
    while (pred[crawl] != -1) {
        path[pathLength++] = pred[crawl];
        crawl = pred[crawl];
    }

    cout << "Shortest path length is: " << dist[dest] << endl;
    cout << "Path is: ";
    for (int i = pathLength - 1; i >= 0; i--) {
        cout << path[i] << " ";
    }
    cout << endl;
}

int main() {
    int v, e;
    cin >> v >> e;
    int adj[100][100] = {0}; // Assuming a maximum of 100 vertices
    int src, dest;
    
    for (int i = 0; i < e; i++) {
        cin >> src >> dest;
        add_edge(adj, src, dest);
    }

    int s;
    cin >> s; // source
    int destination;
    cin >> destination; // destination

    int pred[v], dist[v];
    printShortestDistance(adj, s, destination, v, pred, dist);

    return 0;
}