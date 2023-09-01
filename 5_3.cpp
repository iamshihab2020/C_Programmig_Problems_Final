/**
A set of two linear equations with two unknowns x1 and x2 is given below:
ax1 + bx2 = m
cx1 + dx2 = n

The set has a unique solution
x1 = md-bn/ad-cb

x2 = na-mc /ad-cb
provided the denominator ad – cb is not equal to zero.
Write a program that will read the values of constants a, b, c, d, m, and n and compute the values of
x1 and x2. An appropriate message should be printed if ad – cb = 0.
*/

#include <stdio.h>

int main() {
  int a, b, c, d, m, n;
  float x1, x2;

  printf("Enter the values of a, b, c, d, m, and n: ");
  scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

  // Check if ad - cb is equal to zero
  if (a * d - b * c == 0) {
    printf("The equations do not have a unique solution.\n");
    return 0;
  }

  // Calculate the values of x1 and x2
  x1 = (m * d - n * b) / (a * d - b * c);
  x2 = (n * a - m * c) / (a * d - b * c);

  // Print the values of x1 and x2
  printf("x1 = %.2f\n", x1);
  printf("x2 = %.2f\n", x2);

  return 0;
}
