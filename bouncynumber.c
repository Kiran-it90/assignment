#include <stdio.h>

int main() {
    int number, temp, digit1, digit2, increasing = 0, decreasing = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    digit1 = temp % 10;
    temp /= 10;

    while (temp != 0) {
        digit2 = temp % 10;
        if (digit1 > digit2) {
            decreasing = 1;
        } else if (digit1 < digit2) {
            increasing = 1;
        }
        digit1 = digit2;
        temp /= 10;
    }

    if (increasing && decreasing) {
        printf("%d is a Bouncy Number.\n", number);
    } else {
        printf("%d is not a Bouncy Number.\n", number);
    }

    return 0;
}
