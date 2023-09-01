
/**
Write a program to compute and display the sum of all inte gers that are divisible by 6 but not
divisible by 4 and lie between 0 and 100. The program should also count and display the number
of such values.
*/

#include <stdio.h>

int main() {
  int i, sum = 0, count = 0;

  // Loop through all integers from 0 to 100
  for (i = 1; i <= 100; i++) {
    // If the integer is divisible by 6 but not divisible by 4, add it to the sum
    if (i % 6 == 0 && i % 4 != 0) {
      sum += i;
      count++;
    }
  }

  // Print the sum and the number of such values
  printf("The sum of all integers that are divisible by 6 but not divisible by 4 and lie between 0 and 100 is %d.\n", sum);
  printf("The number of such values is %d.\n", count);

  return 0;
}
