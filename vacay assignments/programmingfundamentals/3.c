#include <stdio.h>
#include <math.h>

int determinant(int mat[][100], int n) {
    int det = 0;
    int submat[100][100];
    int sign = 1;

    if (n == 1) {
        return mat[0][0];
    } else if (n == 2) {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]); 
        } else {
            int det1, det2, det3;
            det1 = mat[0][0] * ((mat[1][1] * mat[2][2]) - (mat[1][2] * mat[2][1]));
            det2 = mat[0][1] * ((mat[1][0] * mat[2][2]) - (mat[2][0] * mat[1][2])); 
            det3 = mat[0][2] * ((mat[1][0] * mat[2][1]) - (mat[2][0] * mat[1][1])); 
            det = det1 - det2 + det3; 
            return det;
    }
}

int main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("The determinant of the matrix is: %d\n", det);

    return 0;
}