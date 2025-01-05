#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double a, b, c, discriminant, root1, root2;

    // Input the coefficients
    printf("Enter the coefficients a, b, and c for the quadratic equation ax^2 + bx + c = 0:\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the value of discriminant to find the roots
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // One real and repeated root
        root1 = -b / (2 * a);
        printf("The root is real and repeated.\n");
        printf("Root = %.2lf\n", root1);
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}
