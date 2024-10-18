#include <stdio.h>

int main() {
    int a[2][2] = {
        (1, 2),
        (4, 5)
    };
    int b[2][2] = {
        (5, 8),
        (9, 4)
    };
    int c[2][2];
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            printf("%d", c[i][j]);    
        }
        printf("\n");
    }

    return 0;

}