#include <stdio.h>
#include <math.h>

int main() {
    // Input: H is the height above the water, L is the horizontal distance sailed
    double H, L;

    // Read the input
    scanf("%lf %lf", &H, &L);

    // Calculate the depth of the lake at point A using the Pythagorean theorem
    double depth = sqrt(H * H - L * L);

    // Print the result with a precision up to 6 decimal places
    printf("%.6lf\n", depth);

    return 0;
}
