// wave of the two d array

#include <iostream>
using namespace std;

void wave(int arr[][4], int rows, int cols) {
    for (int col = 0; col < cols; ++col) {
        // If column index is odd, print downwards
        if (col % 2 != 0) {
            for (int row = rows - 1; row >= 0; --row) {
                cout << arr[row][col] << " ";
            }
        } else { // If column index is even, print upwards
            for (int row = 0; row < rows; ++row) {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rows = 3;
    int cols = 4;

    // Print the wave pattern in the array
    wave(arr, rows, cols);

    return 0;
}
