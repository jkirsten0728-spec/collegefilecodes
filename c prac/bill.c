#include <stdio.h>

int main() {
    float units, bill = 0.0, surcharge = 0.0;
    const float min_charge = 35.00; // Minimum bill amount

    // Prompt user for input
    printf("Enter the number of water units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a valid number of units.\n");
        return 1;
    }

    // Calculate water bill based on consumption tiers
    if (units <= 50) {
        bill = units * 0.40;
    } else if (units <= 150) {
        bill = (50 * 0.40) + (units - 50) * 0.80;
    } else if (units <= 250) {
        bill = (50 * 0.40) + (100 * 0.80) + (units - 150) * 1.20;
    } else {
        bill = (50 * 0.40) + (100 * 0.80) + (100 * 1.20) + ((units - 250) * 1.55);
    }

    // Apply minimum charge if bill is lower than minimum
    if (bill < min_charge) {
        bill = min_charge;
    }

    // Add a 10% surcharge if the bill exceeds $100
    if (bill > 100.0) {
        surcharge = bill * 0.10;
        bill += surcharge;
    }

    // Display the breakdown
    printf("\n--- Water Bill Summary ---\n");
    printf("Units Consumed: %.2f\n", units);
    if (surcharge > 0) {
        printf("Surcharge (10%): %.2f\n", surcharge);
    }
    printf("Total Amount to Pay: $%.2f\n", bill);

    return 0;
}
