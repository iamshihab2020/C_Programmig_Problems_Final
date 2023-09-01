/**
Given a list of marks ranging from 0 to 100, write a program to compute and print the number of
students:
(a) who have obtained more than 80 marks,
(b) who have obtained more than 60 marks,
(c) who have obtained more than 40 marks,
(d) who have obtained 40 or less marks,
(e) in the range 81 to 100,
(f) in the range 61 to 80,
(g) in the range 41 to 60, and
(h) in the range 0 to 40.
The program should use a minimum number of if statements.
*/

#include <stdio.h>

int main() {
  int n, marks[100], i, count_a, count_b, count_c, count_d, count_e, count_f, count_g, count_h;

  // Read the number of students
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // Read the marks of all students
  for (i = 0; i < n; i++) {
    printf("Enter the marks of student %d: ", i + 1);
    scanf("%d", &marks[i]);
  }

  // Initialize the counters
  count_a = count_b = count_c = count_d = count_e = count_f = count_g = count_h = 0;

  // Count the number of students in each range
  for (i = 0; i < n; i++) {
    if (marks[i] > 80) {
      count_a++;
    } else if (marks[i] > 60) {
      count_b++;
    } else if (marks[i] > 40) {
      count_c++;
    } else if (marks[i] <= 40) {
      count_d++;
    }

    if (marks[i] >= 81 && marks[i] <= 100) {
      count_e++;
    } else if (marks[i] >= 61 && marks[i] <= 80) {
      count_f++;
    } else if (marks[i] >= 41 && marks[i] <= 60) {
      count_g++;
    } else if (marks[i] <= 40) {
      count_h++;
    }
  }

  // Print the number of students in each range
  printf("Number of students with marks greater than 80: %d\n", count_a);
  printf("Number of students with marks greater than 60: %d\n", count_b);
  printf("Number of students with marks greater than 40: %d\n", count_c);
  printf("Number of students with marks 40 or less: %d\n", count_d);
  printf("Number of students with marks in the range 81 to 100: %d\n", count_e);
  printf("Number of students with marks in the range 61 to 80: %d\n", count_f);
  printf("Number of students with marks in the range 41 to 60: %d\n", count_g);
  printf("Number of students with marks in the range 0 to 40: %d\n", count_h);

  return 0;
}

