#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    
    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        return 1;
    }
    
    //for each case: 1. sum, 2. subtraction, 3. muliply, 4. division
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
    }
    
    return 0;
}
