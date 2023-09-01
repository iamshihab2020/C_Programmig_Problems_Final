/*Write an interactive program that could read a positive integer number and decide whether the
number is a prime number and display the output accordingly.
Modify the program to count all the prime numbers that lie bet ween 100 and 200.
NOTE: A prime number is a positive integer that is divisible only by 1 or by itself.*/

#include <stdio.h>


// Modified program to count all the prime numbers that lie between 100 and 200
int main() {
  int i, count = 0;

  // Loop through all integers from 100 to 200
  for (i = 100; i <= 200; i++) {
    // Check if the integer is prime
    bool isPrime = true;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        isPrime = false;
        break;
      }
    }

    // If the integer is prime, increment the count
    if (isPrime) {
      count++;
    }
  }

  // Print the count
  printf("The number of prime numbers between 100 and 200 is %d.\n", count);

  return 0;
}

