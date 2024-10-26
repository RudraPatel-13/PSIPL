#include<stdio.h>
int sumOfDigits(int n) {

    if (n == 0) {
        return 0;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number;


    printf("Enter a positive integer: ");
    scanf("%d", &number);


    if (number < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {

        int result = sumOfDigits(number);
       

        printf("Sum of digits of %d = %d\n", number, result);
    }

    return 0;
}

