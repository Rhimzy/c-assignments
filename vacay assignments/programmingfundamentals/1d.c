#include <stdio.h>

int main() {
    int rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= (2 * rows - 2 * i); j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= (2 * rows - 2 * i); j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
