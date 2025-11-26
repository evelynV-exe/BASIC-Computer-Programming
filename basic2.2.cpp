#include <stdio.h>

int main() {
    int loop, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    if (scanf("%d", &loop) != 1) {
        return 1;
    }
    
    for (i = 0; i < loop; i++) {
        scanf("%f %d", &unitPrice, &quantity);

        itemCost = unitPrice * quantity;

        if (unitPrice >= 1000) {
            itemCost = itemCost * 0.9;
        }

        grandTotal += itemCost;
    }

    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}
