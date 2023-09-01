
/*
8.2 Write a program to do the following:
(a) To output the question "Who is the inventor of C ?"
(b) To accept an answer.
(c) To print out "Good" and then stop, if the answer is correct.
(d) To output the message 'try again', if the answer is wrong.
(e) To display the correct answer when the answer is wrong even at the third attempt and stop.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char answer[100];

    printf("Who is the inventor of C? ");
    scanf("%s", answer);

    // Check if the answer is correct
    if (strcmp(answer, "Dennis Ritchie") == 0) {
        printf("Good\n");
    } else {
        printf("Try again.\n");

        // Second attempt
        printf("Who is the inventor of C? ");
        scanf("%s", answer);

        if (strcmp(answer, "Dennis Ritchie") == 0) {
            printf("Good\n");
        } else {
            printf("Try again.\n");

            // Third attempt with the correct answer
            printf("The correct answer is: Dennis Ritchie\n");
        }
    }

    return 0;
}

