/*
9.2 Write a function space(x) that can be used to provide a space of x positions between two output numbers. Demonstrate its application.
*/
#include <stdio.h>

// Function to provide space of x positions between two numbers
void space(int x, int num1, int num2) {
    printf("%d", num1);
    for (int i = 0; i < x; i++) {
        printf(" ");
    }
    printf("%d\n", num2);
}

int main() {
    int x = 5;
    int num1 = 10;
    int num2 = 20;

    space(x, num1, num2);

    return 0;
}

