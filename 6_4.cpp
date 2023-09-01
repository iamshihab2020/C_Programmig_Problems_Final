
/*6.4 The numbers in the sequence
1 1 2 3 5 8 13 21.......
are called Fibonacci numbers. Write a program using a do....while loop to calculate and print the first m Fibonacci numbers.
(Hint: After the first two numbers in the series, each number is the sum of the two preceding numbers.)*/

#include <stdio.h>

int main() {
    int m, first = 1, second = 1, next, i = 2;

    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &m);

    if (m >= 1) {
        printf("Fibonacci Sequence: ");
        printf("%d %d ", first, second);

        do {
            next = first + second;
            printf("%d ", next);

            // Update the variables for the next iteration
            first = second;
            second = next;

            i++;
        } while (i < m);

        printf("\n");
    } else {
        printf("Invalid input. Please enter a positive integer.\n");
    }

    return 0;
}
