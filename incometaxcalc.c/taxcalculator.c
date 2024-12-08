#include <stdio.h>

int main() {
    int income;
    float tax = 0; // Changed to float to handle decimal values

    printf("Enter income: ");
    scanf("%d", &income); // Corrected scanf

    // Tax calculation based on income brackets
    if (income <= 250000) {
        tax = 0;
    } else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    } else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }

    printf("The total tax you need to pay is: %.2f\n", tax); // Print tax with 2 decimal places
    return 0;
}