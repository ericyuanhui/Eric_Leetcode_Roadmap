//
// Created by Kitty on 2024/3/6.
//

#ifndef CLION_PROJECT_304NUM_MATRIX_H
#define CLION_PROJECT_304NUM_MATRIX_H
#include <iostream>
#include <vector>

using namespace std;
class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        pre_matrix.resize(m + 1, vector<int>(n + 1));
        for (int i = 1; i < (m + 1); i++) {
            for (int j = 1; j < (n + 1); j++) {
                pre_matrix[i][j] = pre_matrix[i-1][j] + pre_matrix[i][j-1] + matrix[i-1][j-1] - pre_matrix[i-1][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = pre_matrix[row2+1][col2+1] - pre_matrix[row1][col2+1] - pre_matrix[row2+1][col1]
                + pre_matrix[row1][col1];
        return res;
    }
private:
    vector<vector<int>> pre_matrix;
};
#endif //CLION_PROJECT_304NUM_MATRIX_H

