/*Write a program to read a double-type value x that repre sents angle in radians and a charactertype
variable T that represents the type of trigonometric function and display the value of
(a) sin(x), if s or S is assigned to T,
(b) cos (x), if c or C is assigned to T, and
(c) tan (x), if t or T is assigned to T
using
(i) if......else statement and
(ii) switch statement.*/

#include <stdio.h>
#include <math.h>

int main() {
  double x;
  char T;

  // Read the angle and the trigonometric function
  printf("Enter the angle in radians: ");
  scanf("%lf", &x);
  printf("Enter the trigonometric function (s, c, or t): ");
  scanf(" %c", &T);

  // Switch statement
  switch (T) {
    case 's':
      printf("sin(%.2f) = %.2f\n", x, sin(x));
      break;
    case 'c':
      printf("cos(%.2f) = %.2f\n", x, cos(x));
      break;
    case 't':
      printf("tan(%.2f) = %.2f\n", x, tan(x));
      break;
    default:
      printf("Invalid trigonometric function.\n");
  }

  return 0;
}

