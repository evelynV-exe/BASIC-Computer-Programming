#include <stdio.h>

int main() {
    int num;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    
    if (scanf("%d", &num) != 1) {
        return 1;
    }

    while (num != -1) {
        if (num >= 80) {
            countA++;
        } else if (num >= 70) {
            countB++;
        } else if (num >= 60) {
            countC++;
        } else if (num >= 50) {
            countD++;
        } else {
            countF++;
        }
        
        if (scanf("%d", &num) != 1) {
            break; 
        }
    }

    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);
    return 0;
}
