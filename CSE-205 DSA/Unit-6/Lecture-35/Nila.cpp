#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class WebsiteGraph {
public:
    int webpages;
    vector<vector<int>> adjacencyList;

    WebsiteGraph(int v) : webpages(v), adjacencyList(v) {}

    void addHyperlink(int u, int v) {
        adjacencyList[u].push_back(v);
    }

    void bfsTraversal() {
        vector<bool> visited(webpages, false);
        queue<int> q;

        for (int i = 0; i < webpages; ++i) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;

                while (!q.empty()) {
                    int currentPage = q.front();
                    q.pop();

                    cout << currentPage << " ";

                    for (int linkedPage : adjacencyList[currentPage]) {
                        if (!visited[linkedPage]) {
                            q.push(linkedPage);
                            visited[linkedPage] = true;
                        }
                    }
                }
            }
        }
    }
};

int main() {
    int V, E;
    cin >> V >> E;

    WebsiteGraph website(V);

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        website.addHyperlink(u, v);
    }

    // cout << "BFS Traversal Order:" << endl;
    website.bfsTraversal();
    cout << endl;

    return 0;
}
