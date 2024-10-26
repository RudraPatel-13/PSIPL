#include <stdio.h>


unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int number;
   
    printf("Enter a positive integer: ");
    scanf("%d", &number);
   
    unsigned long long result = factorial(number);
 
    if (number >= 0) {
        printf("Factorial of %d = %llu\n", number, result);
    }

    return 0;
}

