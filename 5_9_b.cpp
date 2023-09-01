/**
Write a program that will read the value of x and evaluate the following function
y =
{1 for x<0
{0   for x = 0
{-1 for x<0
using
(a) nested if statements,
(b) else if statements, and
(c) conditional operator ? :
*/

#include <stdio.h>

int main() {
  int x, y;

  // Get the value of x
  printf("Enter the value of x: ");
  scanf("%d", &x);

  // Evaluate the function
  if (x < 0) {
    y = 1;
  } else {
    if (x == 0) {
      y = 0;
    } else {
      y = -1;
    }
  }

  // Print the value of y
  printf("y = %d\n", y);

  return 0;
}

