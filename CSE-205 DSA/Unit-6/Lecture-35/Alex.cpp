#include <iostream>
#include <list> // Include the <list> header for the list container
using namespace std;

// A class to represent a graph
class Graph {
  // Number of vertices
  int V;
  // Adjacency list
  list<int> *adj; // Use list container for adjacency list
  // A function to perform DFS on a single vertex
  void DFSUtil(int v, bool visited[]);

public:
  // Constructor
  Graph(int V);
  // A function to add an edge to the graph
  void addEdge(int v, int w);
  // A function to perform DFS on the whole graph
  void DFS(int startVertex);
};

// Constructor
Graph::Graph(int V) {
  this->V = V;
  adj = new list<int>[V];
}

// A function to add an edge to the graph
void Graph::addEdge(int v, int w) {
  adj[v].push_back(w); // Add w to v's list
}

// A function to perform DFS on a single vertex
void Graph::DFSUtil(int v, bool visited[]) {
  // Mark the current node as visited and print it
  visited[v] = true;
  cout << v << " ";

  // Recur for all the vertices adjacent to this vertex
  list<int>::iterator i;
  for (i = adj[v].begin(); i != adj[v].end(); ++i)
    if (!visited[*i])
      DFSUtil(*i, visited);
}

// A function to perform DFS on the whole graph
void Graph::DFS(int startVertex) {
  // Mark all the vertices as not visited
  bool *visited = new bool[V];
  for (int i = 0; i < V; i++)
    visited[i] = false;

  // Call the recursive helper function to print DFS traversal
  DFSUtil(startVertex, visited);
}

// Driver code
int main() {
  // Read the input from the user
  int V, E;
  cin >> V >> E;
  Graph g(V);
  for (int i = 0; i < E; i++) {
    int v, w;
    cin >> v >> w;
    g.addEdge(v, w);
  }
  int startVertex;
  cin >> startVertex;

  // Print the output
  cout << "Depth First Traversal starting from vertex " << startVertex << ":\n";
  g.DFS(startVertex);
  return 0;
}
