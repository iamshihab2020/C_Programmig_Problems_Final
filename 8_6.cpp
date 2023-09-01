
/*Write a program to replace a particular word by another word in a given string.
For example, the word "PASCAL" should be replaced by "C" in the text "It is good to program in PASCAL language." */

//"It is good to program in PASCAL language."

#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    char word_to_replace[100];
    char replacement[100];

    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);

    printf("Enter the word to replace: ");
    scanf("%s", word_to_replace);

    printf("Enter the replacement word: ");
    scanf("%s", replacement);

    char *found = strstr(input, word_to_replace);

    if (found) {
        strcpy(found, replacement);
        printf("Modified string: %s\n", input);
    } else {
        printf("Word not found in the string.\n");
    }

    return 0;
}
