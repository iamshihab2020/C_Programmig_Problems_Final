/***
Write a program to read three integer values from the keyboard and displays the output stating
that they are the sides of right-angled triangle.
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter three integer values:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the values form a right-angled triangle
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("The given sides can form a right-angled triangle.\n");
    } else {
        printf("The given sides cannot form a right-angled triangle.\n");
    }

    return 0;
}
