/*
8.13 Write a program that will copy m consecutive characters from a
string s1 beginning at position n into another string s2.*/


#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];
    int n, m;

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0'; // Remove newline character

    printf("Enter the starting position (n): ");
    scanf("%d", &n);

    printf("Enter the number of characters to copy (m): ");
    scanf("%d", &m);

    strncpy(s2, s1 + n - 1, m);
    s2[m] = '\0';

    printf("Copied string: %s\n", s2);

    return 0;
}

