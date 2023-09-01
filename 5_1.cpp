
/***
Write a program to determine whether a given number is ‘odd’ or ‘even’ and print the message
NUMBER IS EVEN
or
NUMBER IS ODD
(a) without using else option, and
(b) with else option.
*/

#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  //(A)
    if (number % 2 == 0) {
    printf("EVEN\n");
  } else {
    printf("ODD\n");
  }

  // (B)
  //printf("%s\n", (number % 2 == 0) ? "EVEN" : "ODD");

  return 0;
}
