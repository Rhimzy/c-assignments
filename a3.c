#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >=c) {
        printf("%d is the largest number among the three integers.", a);
    } else if (b >= a && b >= c) {
        printf("%d is the largest number among the three integers.", b);
    } else {
        printf("%d is the largest number among the three integers.", c);
    }

}