
/*
Write a program to print all integers that are not divisible by either 2 or 3 and lie between 1 and 100. Program should also account the number of such integers and print the result.
*/
#include <stdio.h>

int main() {
  int i, count = 0;

  // Print the header
  printf("The numbers that are not divisible by either 2 or 3 are:\n");

  // Loop through all integers from 1 to 100
  for (i = 1; i <= 100; i++) {
    // If the number is not divisible by 2 or 3, print it
    if (i % 2 != 0 && i % 3 != 0) {
      printf("%d ", i);
      count++;
    }
  }

  // Print the number of such integers
  printf("\nThe number of such integers is %d.\n", count);

  return 0;
}


