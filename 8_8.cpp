/*
8.8 Write a program that reads a string from the keyboard and determines
whether the string is a palindrome or not. (A string is a palindrome if it can be read from left and right
with the same meaning. For example, Madam and Anna are palindrome strings. Ignore capitalization).
*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
//# <bits/stdc++.h>
// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int len = strlen(str);
    int i = 0; // Start from the beginning of the string
    int j = len - 1; // Start from the end of the string

    while (i < j) { // Continue until we meet in the middle
        // Ignore capitalization and check if characters are different
        if (tolower(str[i]) != tolower(str[j])) {
            return false; // If they are different, it's not a palindrome
        }
        i++; // Move forward from the beginning
        j--; // Move backward from the end
    }
    return true; // If we didn't find any differences, it's a palindrome
}

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character (if it exists)
    input[strcspn(input, "\n")] = '\0';

    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
