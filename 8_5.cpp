/**
8.5 Write a program which will read a string and rewrite it in the alphabetical order. For example, the word STRING should be written as GINRST.
*/


#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter a string: ");
    scanf("%s", input);

    int len = strlen(input);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (input[j] > input[j + 1]) {
                char temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
    }

    printf("Alphabetical order: %s\n", input);

    return 0;
}

