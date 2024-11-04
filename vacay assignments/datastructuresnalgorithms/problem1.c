#include <stdio.h>

/* according to the problem each row is considered a row matrix which is a part of the main matrix making it a NxN order matrix
so reversing each row individually becomes an easy task and so does rearranging and reversing the columns
*/

const max_size = 100;

void main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int matrix[30][30];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int rowstack[max_size];
    int rowtop = -1;
    int colstack[max_size];
    int coltop = -1;
    
}