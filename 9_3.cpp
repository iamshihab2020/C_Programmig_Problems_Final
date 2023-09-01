
/**

9.6 Write a function that will round a floating-point number to an indicated decimal place.
 For example the number 17.457 would yield the value 17.46 when it is rounded off to two decimal places.
*/


#include <stdio.h>
#include <math.h>

// Function to round a floating-point number to a specified decimal place
double roundToDecimalPlace(double num, int decimalPlaces) {
    double multiplier = pow(10, decimalPlaces);
    return round(num * multiplier) / multiplier;
}

int main() {
    double number = 17.457;
    int decimalPlaces = 2;

    double roundedNumber = roundToDecimalPlace(number, decimalPlaces);

    printf("Original number: %.3lf\n", number);  // Displaying with 3 decimal places
    printf("Rounded number: %.2lf\n", roundedNumber);

    return 0;
}

