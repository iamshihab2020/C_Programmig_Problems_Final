/*
Write a program to print a square of size 5 by using the character S as shown below:
SSSSS
SSSSS
SSSSS
SSSSS
SSSSS
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
    for (j = 0; j < 5; j++) {
      printf("S");
    }
    printf("\n");
  }

  // Print the bottom line
  for (i = 0; i < 5; i++) {
    printf("S");
  }
  printf("\n");

  return 0;
}
