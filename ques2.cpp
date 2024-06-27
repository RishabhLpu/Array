
#include <iostream>
#include <climits> // For INT_MIN

int findMaxColumnSum(int mat[][4], int rows, int cols) {
    int maxSum = INT_MIN; 
    
    for (int j = 0; j < cols; ++j) {
        int currentSum = 0; 
        
        for (int i = 0; i < rows; ++i) {
        }
        
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    
    return maxSum; 
}

int main() {
    int mat[3][4] = {
        {1, 5, 3, 7},
        {9, 2, 8, 4},
        {6, 11, 10, 12}
    };
    int rows = 3;
    int cols = 4;

    int maxColumnSum = findMaxColumnSum(mat, rows, cols);

    std::cout << "The maximum sum of any column in the matrix is: " << maxColumnSum << std::endl;

    return 0;
}
