#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, finalAmount;
    int years;
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in decimal): ");
    scanf("%f", &rate);
    printf("Enter Number of Years: ");
    scanf("%d", &years);
    finalAmount = principal * pow((1 + rate), years);
    printf("Final Amount after %d years = %.2f\n", years, finalAmount);

    return 0;
}