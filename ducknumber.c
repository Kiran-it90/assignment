#include <stdio.h>

int main() {
    int number, temp, digit, isDuckNumber = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number == 0) {
        printf("0 is not a Duck Number.\n");
        return 0;
    }
    
    temp = number;
    
    if (number < 10) {
        printf("%d is not a Duck Number.\n", number);
        return 0;
    }
    
    while (temp != 0) {
        digit = temp % 10;
        
        if (digit == 0) {
            isDuckNumber = 1;
            break;
        }
        
        temp /= 10;
    }

    if (isDuckNumber == 1) {
        printf("%d is a Duck Number.\n", number);
    } else {
        printf("%d is not a Duck Number.\n", number);
    }

    return 0;
}
