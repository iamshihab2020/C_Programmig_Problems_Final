/**
Write programs to print the following outputs using for loops.
(a)
*****
****
***
**
*
*/


#include <stdio.h>

int main() {
  int i, n;

  // Get the number of rows
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  // Print the pattern
  for (i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}

