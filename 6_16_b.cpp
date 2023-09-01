
/*
Write a program to print a square of size 5 by using the character S as shown below:
S S S S S
S           S
S           S
S           S
S S S S S
*/

#include <stdio.h>

int main() {
  int i, j;

  // Print the top line
  for (i = 0; i < 5; i++) {
    printf("S");
  }
  printf("\n");

  // Print the middle lines
  for (i = 1; i < 4; i++) {
    printf("S");
    for (j = 1; j < 4; j++) {
      printf(" ");
    }
    printf("S\n");
  }

  // Print the bottom line
  for (i = 0; i < 5; i++) {
    printf("S");
  }
  printf("\n");

  return 0;
}
