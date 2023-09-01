/**
6.1 Given a number, write a program using while loop to reverse the digits of the number.
For example, the number 12345 should be written as 54321
 (Hint: Use modulus operator to extract the last digit and the integer division by 10 to get the n-1 digit number from the n digit number.)
*/

#include <stdio.h>

int main() {
  int n, reversed_number = 0, digit;

  // Get the number
  printf("Enter the number: ");
  scanf("%d", &n);

  // Reverse the number
  while (n != 0) {
    digit = n % 10;
    reversed_number = reversed_number * 10 + digit;
    n = n / 10;
  }

  // Print the reversed number
  printf("The reversed number is %d.\n", reversed_number);

  return 0;
}

