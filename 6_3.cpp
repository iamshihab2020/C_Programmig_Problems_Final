/*
Write a program to compute the sum of the digits of a given integer number.*/

#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Ensure the number is positive
    if (num < 0) {
        num = -num;
    }

    // Calculate the sum of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
