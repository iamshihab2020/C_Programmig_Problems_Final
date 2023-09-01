/*6.2 The factorial of an integer m is the product of
consecutive integers from 1 to m. That is, factorial m = m! = m x (m-1) x ...... x 1.
Write a program that computes and prints a table of factorials for any given m.*/

#include <stdio.h>

int main() {
  int m, i;
  long long factorial;

  // Get the number
  printf("Enter the number: ");
  scanf("%d", &m);

  // Print the table of factorials
  for (i = 1; i <= m; i++) {
    factorial = 1;
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    printf("%d! = %lld\n", i, factorial);
  }

  return 0;
}
