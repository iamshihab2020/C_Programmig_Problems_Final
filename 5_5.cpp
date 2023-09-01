/***
5.5 Admission to a professional course is subject to the following conditions:
(a) Marks in Mathematics >= 60
(b) Marks in Physics >= 50
(c) Marks in Chemistry >= 40
(d) Total in all three subjects >= 200
or
Total in Mathematics and Physics >= 150
Given the marks in the three subjects, write a program to process the applications to list the
eligible candidates.
*/
#include <stdio.h>

int main() {
  int m, p, c, t, mp;

  // Read the marks in the three subjects
  printf("Enter the marks in Mathematics, Physics and Chemistry: ");
  scanf("%d %d %d", &m, &p, &c);

  // Calculate the total marks
  t = m + p + c;
  mp = m + p;

  // Check the eligibility criteria
  if (m >= 60 && p >= 50 && c >= 40 && t >= 200) {
    printf("The candidate is eligible for admission.\n");
  } else if (m >= 60 && p >= 50 && t >= 150) {
    printf("The candidate is eligible for admission.\n");
  } else {
    printf("The candidate is not eligible for admission.\n");
  }

  return 0;
}

