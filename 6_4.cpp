
/*6.4 The numbers in the sequence
1 1 2 3 5 8 13 21.......
are called Fibonacci numbers. Write a program using a do....while loop to calculate and print the first m Fibonacci numbers.
(Hint: After the first two numbers in the series, each number is the sum of the two preceding numbers.)*/

#include <stdio.h>

int main() {
  int i, m, first = 0, second = 1, next;

  // Get the number
  printf("Enter the number: ");
  scanf("%d", &m);

  // Print the first two Fibonacci numbers
  printf("%d %d ", first, second);

  // Calculate and print the next Fibonacci numbers
  do {
    next = first + second;
    printf("%d ", next);
    first = second;
    second = next;
    i++;
  } while (i < m - 2);

  return 0;
}
