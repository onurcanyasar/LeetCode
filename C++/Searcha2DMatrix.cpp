#include <vector>
#include <cmath>

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) { //74. Search a 2D Matrix
    int height = (int) matrix.size();
    int width = (int) matrix[0].size();
    int left = 0;
    int right = height * width - 1;
    int middle;
    int col;
    int row;
    int num;
    while (left <= right){
        middle = (left + right) / 2;
        row = std::floor(middle / width);
        col = middle % width;
        num = matrix[row][col];
        if (target == num) return true;

        if (target > num){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return false;
}