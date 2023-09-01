
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // Input values
    printf("Enter the values of a, b, and c:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check for special cases and calculate the discriminant
    if (a == 0) {
        if (b == 0) {
            printf("No solution: Both a and b are zero.\n");
        } else {
            x1 = x2 = -c / b;
            printf("One root: x = %.2lf\n", x1);
        }
    } else {
        discriminant = b * b - 4 * a * c;

        if (discriminant < 0) {
            printf("No real roots: Discriminant is negative.\n");
        } else {
            x1 = (-b + sqrt(discriminant)) / (2 * a);
            x2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two real roots:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }

    return 0;
}
