#include <stdio.h>
#include <math.h>

int main() {
    float area, side;

    printf("Enter area of square: ");
    scanf("%f", &area);

    side = sqrt(area);

    printf("Side length = %.2f", side);

    return 0;
}