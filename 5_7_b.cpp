/*
Shown below is a Floyd’s triangle.
1
2 3
4 5 6
7 8 9 10
11 .. .. .. 15
.
.
79 .. .. .. .. .. .. 91
(a) Write a program to print this triangle.
(b) Modify the program to produce the following form of Floyd’s triangle.
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include <stdio.h>

int main() {
  int n, i, j;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      if (i >= 2 && i % 2 == 0) {
        if (j == 1 || j == i) {
          printf("1");
        } else {
          printf("0");
        }
      }
      else {
        if (j == 1 || i == j) {
          printf("1");
        } else {
          printf("0");
        }
      }
    }
    printf("\n");
  }

  return 0;
}



