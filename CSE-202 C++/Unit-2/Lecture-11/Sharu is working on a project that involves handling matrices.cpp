#include <iostream>
#include <vector>

using namespace std;

class MatrixSwap {
public:
    void swapRows(vector<vector<int>>& matrix, int r1, int r2) {
        if (r1 <= 0 || r2 <= 0 || r1 > matrix.size() || r2 > matrix.size()) {
            cout << "Invalid row numbers" << endl;
            return;
        }

        swap(matrix[r1 - 1], matrix[r2 - 1]);
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matrix(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    int r1, r2;
    cin >> r1 >> r2;

    MatrixSwap ms;
    ms.swapRows(matrix, r1, r2);

    if (r1 > 0 && r2 > 0 && r1 <= N && r2 <= N) {
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
