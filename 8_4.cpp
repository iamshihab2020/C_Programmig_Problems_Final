/*
8.4 Write a program which will read a text and count all occurrences of a particular word.*/


#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], word[100];
    int count = 0;

    printf("Enter a text: ");
    gets(text);

    printf("Enter the word to count: ");
    scanf("%s", word);

    char *ptr = text;
    while ((ptr = strstr(ptr, word))) {
        count++;
        ptr++;
    }

    printf("The word '%s' occurs %d times in the text.\n", word, count);

    return 0;
}
