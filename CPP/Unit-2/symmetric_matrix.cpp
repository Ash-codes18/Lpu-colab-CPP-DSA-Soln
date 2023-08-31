#include <iostream>
#include <vector>

using namespace std;

class MatrixOperations {
public:
    static bool isSymmetric(const vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] != matrix[j][i]) {
                    return false;
                }
            }
        }
        return true;
    }

    static void printMatrix(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int element : row) {
                cout << element << '\t';
            }
            cout << '\n';
        }
    }
};

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    MatrixOperations matrixOps;
    bool isSymmetric = matrixOps.isSymmetric(matrix);

    cout << "The original matrix is:\n";
    matrixOps.printMatrix(matrix);
    cout << "The Transpose matrix is:\n";
    vector<vector<int>> transposeMatrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transposeMatrix[i][j] = matrix[j][i];
        }
    }
    matrixOps.printMatrix(transposeMatrix);

    if (isSymmetric) {
        cout << "Matrix is Symmetric\n";
    } else {
        cout << "Matrix is not Symmetric\n";
    }

    return 0;
}
