#include <stdio.h>

int main() {
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;   // Extract last digit
        sum = sum + rem;  // Add digit to sum
        num = num / 10;   // Remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}