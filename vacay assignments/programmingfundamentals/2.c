#include <stdio.h>
#include <math.h>

void quadraticRoots(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are: %.2f and %.2f\n", root1, root2);
    } else {
        printf("The roots don't exist.\n");
    }
}

int main() {
    float a, b, c;
    printf("Enter the coefficients (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    quadraticRoots(a, b, c);

    return 0;
}