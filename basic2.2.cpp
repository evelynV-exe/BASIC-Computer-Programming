// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // รับค่า N (จำนวนรายการ)
    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    // TODO: Implement the for loop (N times)
    // TODO: Inside the loop, receive unitPrice and quantity
    // TODO: Implement the if-else discount logic and accumulate grandTotal
    for (i = 0; i < N; i++) {
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