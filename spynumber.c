#include <stdio.h>

int main() {
    int number, sum = 0, product = 1, digit;
    

    printf("Enter a number: ");
    scanf("%d", &number);
    

    int temp = number;

    while (temp != 0) {
        digit = temp % 10;   
        sum += digit;         
        product *= digit;     
        temp /= 10;           
    }

    
    if (sum == product) {
        printf("%d is a Spy Number.\n", number);
    } else {
        printf("%d is not a Spy Number.\n", number);
    }

    return 0;
}
