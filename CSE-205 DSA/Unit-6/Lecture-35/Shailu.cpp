#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adj_list;

    Graph(int v) : vertices(v), adj_list(v) {}

    void addEdge(int src, int dest) {
        adj_list[src].push_back(dest);
        adj_list[dest].push_back(src);
    }

    void bfs(int source, int destination) {
        vector<bool> visited(vertices, false);
        vector<int> distance(vertices, -1);
        vector<int> parent(vertices, -1);

        queue<int> q;
        q.push(source);
        visited[source] = true;
        distance[source] = 0;

        while (!q.empty()) {
            int currentVertex = q.front();
            q.pop();

            for (int neighbor : adj_list[currentVertex]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                    distance[neighbor] = distance[currentVertex] + 1;
                    parent[neighbor] = currentVertex;
                }
            }
        }

        printShortestPath(destination, parent);

        cout << "Shortest path length is: " << distance[destination] << endl;
        cout << "Path is: ";
        printPath(destination, parent);
        cout << endl;
    }

private:
    void printPath(int current, const vector<int>& parent) {
        if (current == -1)
            return;

        printPath(parent[current], parent);
        cout << current << " ";
    }

    void printShortestPath(int destination, const vector<int>& parent) {
        // cout << "Shortest path from source to destination is: ";
        // printPath(destination, parent);
        // cout << endl;
    }
};

int main() {
    int V, E;
    cin >> V >> E;

    Graph graph(V);

    for (int i = 0; i < E; ++i) {
        int src, dest;
        cin >> src >> dest;
        graph.addEdge(src, dest);
    }

    int source, destination;
    cin >> source >> destination;

    graph.bfs(source, destination);

    return 0;
}
