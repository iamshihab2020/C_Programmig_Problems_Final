
/*
An electricity board charges the following rates for the use of electricity:
For the first 200 units: 80 P per unit
For the next 100 units: 90 P per unit
Beyond 300 units: Rs 1.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs.
400, then an additional surcharge of 15% of total amount is charged.
Write a program to read the names of users and number of units consumed and print out the
charges with names.
**/

#include <stdio.h>

int main() {
  char name[100];
  int units;
  float charge, surcharge;

  // Read the name of the user
  printf("Enter the name of the user: ");
  scanf("%s", name);

  // Read the number of units consumed
  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  // Calculate the charge
  if (units <= 200) {
    charge = units * 0.8;
  } else if (units <= 300) {
    charge = 200 * 0.8 + (units - 200) * 0.9;
  } else {
    charge = 200 * 0.8 + 100 * 0.9 + (units - 300);
  }

  // Check if the surcharge is applicable
  if (charge > 400) {
    surcharge = charge * 0.15;
  } else {
    surcharge = 0;
  }

  // Print the charges
  printf("Total charge for %s is Rs. %.2f\n", name, charge + surcharge);

  return 0;
}

