#include <stdio.h>

int main() {
    int number, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum > number) {
        printf("%d is an Abundant Number.\n", number);
    } else {
        printf("%d is not an Abundant Number.\n", number);
    }

    return 0;
}
