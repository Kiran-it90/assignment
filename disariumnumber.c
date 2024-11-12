#include <stdio.h>
#include <math.h>

int main() {
    int number, sum = 0, temp, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    digits = (int)log10(number) + 1;

    while (temp != 0) {
        sum += pow(temp % 10, digits);
        digits--;
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is a Disarium Number.\n", number);
    } else {
        printf("%d is not a Disarium Number.\n", number);
    }

    return 0;
}
