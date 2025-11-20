// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    
    // รับค่าตัวเลข 2 ตัวและรหัสคำสั่ง
    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        return 1; // Handle input failure
    }
    
    // TODO: Implement the switch statement logic here, including break and default
    switch (operationCode) {
        case 1:
            result = num1 + num2;
            printf("%d", result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d", result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d", result);
            break;
        case 4:
            result = num1 / num2;
            printf("%d", result);
            break;
        default:
            printf("Invalid Operation");
            break;
    }// end switch
    
    return 0;
} // end main
