/*
8.3 Write a program to extract a portion of a character
string and print the extracted string. Assume that m characters are extracted, starting with the nth character.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char input[100], extracted[100];
    int n, m;

    printf("Enter a string: ");
    scanf("%s", input);

    printf("Enter the starting position (n) and the number of characters to extract (m): ");
    scanf("%d %d", &n, &m);

    if (n >= 0 && m > 0 && n + m <= strlen(input)) {
        strncpy(extracted, input + n, m);
        extracted[m] = '\0';

        printf("Extracted string: %s\n", extracted);
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}

