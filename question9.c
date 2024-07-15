#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("The sum of the digits is %d\n", sum);

    return 0;
}
