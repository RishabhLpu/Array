
#include <iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col) {
    int startRow = 0;
    int endRow = row - 1;
    int startCol = 0;
    int endCol = col - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Print top row (left to right)
        for (int i = startCol; i <= endCol; i++) {
            cout << arr[startRow][i] << " ";
        }
        startRow++;

        // Print right column (top to bottom)
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // Print bottom row (right to left), if it's still within bounds
        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                cout << arr[endRow][i] << " ";
            }
            endRow--;
        }

        // Print left column (bottom to top), if it's still within bounds
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Spiral order traversal of matrix:" << endl;
    spiralPrint(arr, 3, 3);

    return 0;
}
