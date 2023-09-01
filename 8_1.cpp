/*
8.1 Write a program, which reads your name from the keyboard and outputs a list of ASCII codes, which represent your name.*/

#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("ASCII codes for the characters in your name:\n");

    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c: %d\n", name[i], name[i]);
    }

    return 0;
}

