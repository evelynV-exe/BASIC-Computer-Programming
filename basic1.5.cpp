// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int number;
    int evenNumSum = 0;
    int oddNumSum = 0;
    
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    while (number != 0) {
        if (number == 0) {
            break;
        }

        if (number % 2 == 0) {
            evenNumSum += number;
        } else {
            oddNumSum += number;
        }

        if (scanf("%d", &number) != 1) {
            break; 
        }
    }

    printf("Even Sum: %d\n", evenNumSum);
    printf("Odd Sum: %d\n", oddNumSum);
    return 0;
}
