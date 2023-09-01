#include <stdio.h>
#include <string.h>

// Function to convert lowercase characters to uppercase in a string
void convertToUppercase(char str[10000]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char inputString[1000] ;
    fgets(inputString, sizeof(inputString), stdin);

    convertToUppercase(inputString);

    printf("Uppercase String: %s\n", inputString);

    return 0;
}

