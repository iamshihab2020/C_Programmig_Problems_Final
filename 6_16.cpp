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
    int size = 5; // Size of the square

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("S");
        }
        printf("\n");
    }

    return 0;
}
