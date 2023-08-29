#include <iostream>
#include <vector>

using namespace std;

class MatrixMultiplication {
private:
    vector<vector<int>> matrix;

public:
    MatrixMultiplication(int size) {
        matrix.resize(size, vector<int>(size, 0));
    }

    void readMatrix() {
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix.size(); ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    vector<vector<int>> multiply(MatrixMultiplication& other) {
        int n = matrix.size();
        vector<vector<int>> result(n, vector<int>(n, 0));
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    result[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        
        return result;
    }

    void displayMatrix(vector<vector<int>>& mat) {
        for (const auto& row : mat) {
            for (int val : row) {
                cout << val << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    int M;
    cin >> M;
    
    MatrixMultiplication matrixA(M);
    MatrixMultiplication matrixB(M);
    
    matrixA.readMatrix();
    matrixB.readMatrix();
    
    vector<vector<int>> product_matrix = matrixA.multiply(matrixB);
    
    cout << "The product of the two matrices is:" << endl;
    matrixA.displayMatrix(product_matrix);

    return 0;
}
