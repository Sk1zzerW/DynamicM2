#include <iostream>
#include <vector>

void removeColumn(std::vector<std::vector<int>>& matrix, int colIndex) {
    int rows = matrix.size();
    for (int i = 0; i < rows; ++i) {
        matrix[i].erase(matrix[i].begin() + colIndex);
    }
}

int main() {
    int M = 3, N = 4;
    std::vector<std::vector<int>> matrix(M, std::vector<int>(N));
    
    std::cout << "Enter matrix elements (3x4): \n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int colIndex = 2;
    removeColumn(matrix, colIndex);
    std::cout << "after removing \n";
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
