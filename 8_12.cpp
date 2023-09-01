/*
8.12 Write a program to read a line of text from the keyboard and print out the number of occurrences of a given substring using the function strstr().
*/

#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], substring[1000];

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Remove newline character

    printf("Enter the substring to count: ");
    fgets(substring, sizeof(substring), stdin);
    substring[strcspn(substring, "\n")] = '\0'; // Remove newline character

    int count = 0;
    char *ptr = text;

    while ((ptr = strstr(ptr, substring))) {
        count++;
        ptr++;
    }

    printf("The substring \"%s\" appears %d times in the text.\n", substring, count);

    return 0;
}

