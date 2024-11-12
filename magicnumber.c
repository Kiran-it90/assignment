#include <stdio.h>

int main() {
    int number, sum, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 9) {
        sum = 0;
        temp = number;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        number = sum;
    }

    if (number == 1) {
        printf("It is a Magic Number.\n");
    } else {
        printf("It is not a Magic Number.\n");
    }

    return 0;
}
