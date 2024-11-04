#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int top = 0, bottom = rows - 1, left = 0, right = cols - 1;
    int dir = 0; // 0: right, 1: down, 2: left, 3: up
    int count = 0; // Keep track of elements printed

    while (count < rows * cols) {
        if (dir == 0) { // Move right
            for (int i = left; i <= right; i++) {
                printf("%d ", matrix[top][i]);
                count++;
            }
            top++;
        } else if (dir == 1) { // Move down
            for (int i = top; i <= bottom; i++) {
                printf("%d ", matrix[i][right]);
                count++;
            }
            right--;
        } else if (dir == 2) { // Move left
            for (int i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
                count++;
            }
            bottom--;
        } else if (dir == 3) { // Move up
            for (int i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
                count++;
            }
            left++;
        }
        dir = (dir + 1) % 4; // Cycle through directions
    }

    printf("\n");
    return 0;
}