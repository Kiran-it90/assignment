#include <stdio.h>
#include <math.h>

int main() {
    int number, sum, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    cube = number * number * number;
    sum = 0;
    while (cube != 0) {
        sum += cube % 10;
        cube /= 10;
    }

    if (sum == number) {
        printf("%d is a Dudeney Number.\n", number);
    } else {
        printf("%d is not a Dudeney Number.\n", number);
    }

    return 0;
}
