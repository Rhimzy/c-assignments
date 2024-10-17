#include <stdio.h>

int main() {
    int n, sol;
    printf("Enter an integer to get its multiplication table: ");
    scanf("%d", &n);

    for (int i = 1; i <=10; i++) {
        sol = n * i;
        printf("%d x %d = %d\n", n, i, sol);
    }
    return 0;
}