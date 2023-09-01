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
#include <math.h>

int main() {
    double originalCost, depreciationRate, scrapValue;

    printf("Enter the original cost of the item: ");
    scanf("%lf", &originalCost);

    printf("Enter the depreciation rate (in decimal form, e.g., 0.10 for 10%): ");
    scanf("%lf", &depreciationRate);

    printf("Enter the scrap value (present value) of the item: ");
    scanf("%lf", &scrapValue);

    if (originalCost <= scrapValue || depreciationRate <= 0) {
        printf("Invalid input. The original cost must be greater than the scrap value, and depreciation rate must be positive.\n");
    } else {
        double years = log(scrapValue / originalCost) / log(1 - depreciationRate);

        // Check if years is not a finite number (could be NaN or -inf)
        if (isnan(years) || years == -INFINITY) {
            printf("The item will never reach the scrap value at the given depreciation rate.\n");
        } else {
            printf("The useful life of the item is approximately %.2lf years.\n", years);
        }
    }

    return 0;
}
