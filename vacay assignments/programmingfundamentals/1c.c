#include <stdio.h>

int main() {
    int rows;
    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%d     ", i); // this part kept messing up the shape of the triangle had to trial and error to get the perfect spacing
        }
        printf("\n");
    }
    return 0;
}
