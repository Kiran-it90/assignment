#include <stdio.h>

int main() {
    int number, sum = 0, square, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    temp = square;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is a Neon Number.\n", number);
    } else {
        printf("%d is not a Neon Number.\n", number);
    }

    return 0;
}
