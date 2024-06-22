#include <stdio.h>
#include <math.h>

int main() {
    int n, lower, upper;
    int lowerDiff, upperDiff;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

   
    lower = (int)floor(sqrt(n));
    upper = (int)ceil(sqrt(n));

   
    lower = lower * lower;
    upper = upper * upper;

    lowerDiff = n - lower;
    upperDiff = upper - n;

    
    if (lowerDiff <= upperDiff) {
        printf("The closest integer with a whole number square root is %d\n", lower);
    } else {
        printf("The closest integer with a whole number square root is %d\n", upper);
    }

    return 0;
}
