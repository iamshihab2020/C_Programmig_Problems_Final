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
    int n, num = 1;

    printf("Enter the number of rows for Floyd's triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
