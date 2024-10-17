#include <stdio.h>

int main() {
    int n, revn;
    printf("Enter an integer: ");
    scanf("%d", &n);

// ----------
    // couldnt figure out the logic to reverse the integer in c
// ----------

    if (n == revn) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.", n);
    }

    return 0;
}