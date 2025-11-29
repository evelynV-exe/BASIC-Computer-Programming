#include <stdio.h>

int main() {
    int loop, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    /* Input number of transactions */
    if (scanf("%d", &loop) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 0; i < loop; i++) {
        /* Scan price and quantity with validation */
        if (scanf("%f %d", &unitPrice, &quantity) != 2) {
            printf("Invalid item input.\n");
            return 1;
        }

        /* Calculate item cost + discount */
        itemCost = unitPrice * quantity;
        if (unitPrice >= 1000) {
            itemCost *= 0.90;  /* 10% discount */
        }

        grandTotal += itemCost;
    }

    /* Output result */
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}
