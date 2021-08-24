#include <iostream>
#include <climits>
#include <vector>
using namespace std;

/*
题目描述：求二维数组的鞍点  行最大列最小
时间复杂度：O(n^3)
*/


int findRowMax(vector<vector<int>> matrix, int row) {
    int mx = INT_MIN;
    for (int j = 0; j < matrix[row].size(); ++j) {
        mx = max(mx, matrix[row][j]);
    }
    return mx;
}


int findColMin(vector<vector<int>> matrix, int col) {
    int mi = INT_MAX;
    for (int i = 0; i < matrix.size(); ++i) {
        mi = min(mi, matrix[i][col]);
    }
    return mi;
}


void findBaddlePoint(vector<vector<int>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            int mx = findRowMax(matrix, i);
            int mi = findColMin(matrix, j);
            if (mx == mi) {
                printf("(%d, %d) : %d\n", i, j, mi);
            }
        }
    }
}


int main() {
    vector<vector<int>> matrix = {
        {1, 7, 4, 1},
        {4, 8, 3, 6},
        {1, 6, 1, 2},
        {0, 7, 8, 9}
    };
    findBaddlePoint(matrix);
    return 0;
}
