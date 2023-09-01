/*
The present value (popularly known as book value) of an item is given by the relationship.
P = c(1-d)"
where c = original cost
d = rate of depreciation (per year)
n = number of years
p = present value after y years.
If P is considered the scrap value at the end of useful life of the item, write a program to compute the useful life in years given the original cost, depreciation rate, and the scrap value.
The program should request the user to input the data interactively.*/


#include <stdio.h>

int main() {
  float c, p, d;
  int n;

  // Get the data from the user
  printf("Enter the original cost: ");
  scanf("%f", &c);
  printf("Enter the depreciation rate: ");
  scanf("%f", &d);
  printf("Enter the scrap value: ");
  scanf("%f", &p);

  // Calculate the useful life
  n = (log(p) / log(1 - d));

  // Print the useful life
  printf("The useful life is %d years.\n", n);

  return 0;
}
