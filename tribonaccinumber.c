#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, c = 1, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0 is a Tribonacci Number.\n");
        return 0;
    }

    for (i = 3; i <= n; i++) {
        next = a + b + c;
        a = b;
        b = c;
        c = next;
    }

    if (n == c) {
        printf("%d is a Tribonacci Number.\n", n);
    } else {
        printf("%d is not a Tribonacci Number.\n", n);
    }

    return 0;
}
