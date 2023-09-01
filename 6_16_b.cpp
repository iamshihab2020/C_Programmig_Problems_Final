
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
    int size = 5; // Size of the square

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("S ");
            } else {
                printf("  "); // Print two spaces for the inner area
            }
        }
        printf("\n");
    }

    return 0;
}
