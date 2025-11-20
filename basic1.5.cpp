// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;
    
    // รับค่าตัวเลขตัวแรกก่อนเริ่มลูป
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    // TODO: Implement the while loop and the if-else logic for even/odd accumulation
    while (number != 0) {
        // ... Logic goes here ...
        if (number == 0) {
            break;
        }

        if (number % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }

        // ต้องรับค่าตัวเลขถัดไปที่ท้ายลูป
        if (scanf("%d", &number) != 1) {
            break; 
        }
    }

    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}