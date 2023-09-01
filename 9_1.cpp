

/*
9.1 Write a function exchange to interchange the values of two variables, say x and y. Illustrate the use of this function, in a calling function. Assume that x and y are defined as global variables.
*/

#include <stdio.h>

// Global variables
int x, y;

// Function to interchange the values of two variables
void exchange() {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    x = 5;
    y = 10;

    printf("Before exchange: x = %d, y = %d\n", x, y);

    exchange();

    printf("After exchange: x = %d, y = %d\n", x, y);

    return 0;
}
