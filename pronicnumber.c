#include <stdio.h>

int main() {
    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 0; i * (i + 1) <= number; i++) {
        if (i * (i + 1) == number) {
            printf("%d is a Pronic Number.\n", number);
            return 0;
        }
    }

    printf("%d is not a Pronic Number.\n", number);
    return 0;
}
