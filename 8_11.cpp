/*
8.11 Write a program to read two strings and compare them using the function strncmp() and print a message that the first string is equal, less, or greater than the second one.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = strncmp(str1, str2, sizeof(str1));

    if (result == 0) {
        printf("The first string is equal to the second string.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}

