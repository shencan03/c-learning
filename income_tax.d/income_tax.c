#include <stdio.h>

int main(void) {
    float income;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 750.00f) printf("Tax: %.2f", income / 100);
    else if (income < 2250.00f) printf("Tax: %.2f", 7.50f + (income - 750.00f) * .02f);
    else if (income < 3750.00f) printf("Tax: %.2f", 37.50f + (income - 2250.00f) * .03f);
    else if (income < 5250.00f) printf("Tax: %.2f", 82.50f + (income - 3750.00f) * .04f);
    else if (income < 7000.00f) printf("Tax: %.2f", 142.50f + (income - 5250.00f) * .05f);
    else printf("Tax: %.2f", 230.00f + (income - 7000.00f) * .06f);
}