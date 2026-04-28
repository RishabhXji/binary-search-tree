// spiral traversal
#include <iostream>
#include <vector>

void spiralTraversal(int matrix[3][4], int rows, int cols) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Print top row
        for (int i = left; i <= right; i++) {
            std::cout << matrix[top][i] << " ";
        }
        top++;

        // Print right column
        for (int i = top; i <= bottom; i++) {
            std::cout << matrix[i][right] << " ";
        }
        right--;

        // Print bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                std::cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }

        // Print left column 
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                std::cout << matrix[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int rows=3, cols=4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };
    spiralTraversal(matrix, rows, cols);
    return 0;

}