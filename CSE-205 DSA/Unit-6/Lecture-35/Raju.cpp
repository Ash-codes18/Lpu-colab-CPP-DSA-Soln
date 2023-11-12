#include <iostream>
using namespace std;

bool dfs(int adjMatrix[][100], int n, int start, int end, bool visited[]) {
    if (start == end)
        return true;
    visited[start] = true;
    for (int i = 0; i < n; ++i) {
        if (adjMatrix[start][i] && !visited[i] && dfs(adjMatrix, n, i, end, visited))
            return true;
    }
    return false;
}

bool validPath(int n, int edges[][2], int m, int start, int end) {
    int adjMatrix[100][100] = {0};

    for (int i = 0; i < m; ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjMatrix[u][v] = 1;
    }

    bool visited[n] = {false};
    if (dfs(adjMatrix, n, start, end, visited)) {
        cout << "There is a path from " << start << " to " << end << endl;
        return true;
    } else {
        cout << "There is no path from " << start << " to " << end << endl;
        return false;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    int edges[m][2];
    for (int i = 0; i < m; ++i) {
        cin >> edges[i][0] >> edges[i][1];
    }

    int start, end;
    cin >> start >> end;

    validPath(n, edges, m, start, end);

    return 0;
}