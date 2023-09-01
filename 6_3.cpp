/*
Write a program to compute the sum of the digits of a given integer number.*/

#include <stdio.h>

int main() {
  int n, digit, sum = 0;

  // Get the number
  printf("Enter the number: ");
  scanf("%d", &n);

  // Calculate the sum of the digits
  while (n != 0) {
    digit = n % 10;
    sum += digit;
    n = n / 10;
  }

  // Print the sum
  printf("The sum of the digits is %d.\n", sum);

  return 0;
}
