
/**
Write programs to print the following outputs using for loops.
(a)
1
22
333
4444
55555
*/

#include <stdio.h>

int main() {
  int i;

  // Print the numbers from 1 to 5
  for (i = 1; i <= 5; i++) {
    // Print the number i five times
    for (int j = 1; j <= i; j++) {
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}
