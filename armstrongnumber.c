#include <stdio.h>
#include <math.h>

int main() {
    int number, temp, sum = 0, digits;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;
    digits = (int)log10(number) + 1;
    
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is an Armstrong Number.\n", number);
    } else {
        printf("%d is not an Armstrong Number.\n", number);
    }

    return 0;
}
