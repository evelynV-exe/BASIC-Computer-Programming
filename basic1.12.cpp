// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    // รับค่ารหัสแพ็กเกจและปริมาณการใช้ข้อมูล
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1; // Handle input failure
    }
    
    // TODO: Implement the switch statement based on planCode, 
    // and the nested if-else logic to apply the correct formula.

    if (planCode == 1) {
        if( dataUsage_GB <= 10) {
            totalBill = 299;
        } else {
            totalBill = 299 + 10 * (dataUsage_GB - 10);
        }
    }

    if (planCode == 2) {
        if (dataUsage_GB <= 20) {
            totalBill = 599;
        } else {
            totalBill = 599 + 50 + 5 * (dataUsage_GB - 20);
        }
    }
    

    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}