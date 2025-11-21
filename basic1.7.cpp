// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int customerType;
    float consumption_kWh;
    float totalBill = 0.0;
    
    // รับค่าประเภทลูกค้าและปริมาณการใช้ไฟฟ้า
    if (scanf("%d %f", &customerType, &consumption_kWh) != 2) {
        return 1; // Handle input failure
    }
    
    // TODO: Implement the main if-else logic based on customerType, 
    // and the nested if-else logic based on consumption_kWh.

    if (customerType == 1) {
        if (consumption_kWh > 0 && consumption_kWh < 100) {
            totalBill = consumption_kWh * 3;
        } else if (consumption_kWh > 100) {
            totalBill = consumption_kWh * 4;
        }
    } else if (customerType == 2) {
        if (consumption_kWh > 0 && consumption_kWh < 500) {
            totalBill = consumption_kWh * 5;
        } else if (consumption_kWh > 500) {
            totalBill = consumption_kWh * 6.5;
        }
    } else {
        printf("Invalid Customer Type");
        return 1;
    }

    if (totalBill > 0.0 || customerType == 3) { // Use totalBill > 0.0 to check if calculation succeeded
        printf("%.2f\n", totalBill);
    } 

    return 0;
}