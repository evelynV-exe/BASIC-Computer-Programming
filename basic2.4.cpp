#include <stdio.h>

int main() {
    float princ, monthPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;
    
    if (scanf("%f %f", &princ, &monthPayment) != 2) {
        return 1;
    }

    while (princ > 0) {
        monthCount++;
        interest = princ * INTEREST_RATE;
        princ += interest;

        if (monthPayment < interest) {
            princ += PENALTY;
        }

        princ -= monthPayment;
        printf("Month %d: Remaining %.2f\n", monthCount, princ);

        if (monthCount >= 10 && princ > 0) {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    printf("Loan settled in %d months.\n", monthCount);
    return 0;
}
