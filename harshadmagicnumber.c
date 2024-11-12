#include <stdio.h>

int main() {
    int number, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (number % sum == 0) {
        printf("%d is a Harshad Magic Number.\n", number);
    } else {
        printf("%d is not a Harshad Magic Number.\n", number);
    }

    return 0;
}
