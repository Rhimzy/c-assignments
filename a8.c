#include <stdio.h>

int main() {
    int i, n;
    int sume = 0, sumo = 0; // had to spend a long time figuring out why my output sums were a digit higher then realised i was initialising sume and sumo at 1.
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i<n; i++) { // it was also including 1 and n in the sum which messed up the output, and based on the question im pretty sure the values are BETWEEN 1 and n and dont include the two.
        if (i % 2 == 0) {
            sume += i;
        } else {
            sumo += i;
        }
    }
    printf("Sum of odd numbers between 1-%d is %d\n", n, sumo);
    printf("Sum of even numbers between 1-%d is %d", n, sume);
    return 0;
}