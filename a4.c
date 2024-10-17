#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter N (Natural Number): ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is %d", n, sum);
    return 0;
}