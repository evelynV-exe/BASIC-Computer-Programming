#include <stdio.h> 

int main(void) {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    printf("Enter scores (-1 to stop):\n");

    while (1) {
        if (scanf("%d", &score) != 1) {   // Prevents input crash if user enters invalid format
            printf("Invalid input detected. Ending the program now.\n");
            return 1;
        }

        if (score == -1) {  
            break;
        }

        if (score >= 80) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else if (score >= 0) {
            countF++;
        } else {
            printf("Score cannot be negative. Ignored.\n");
        }
    }

    printf("\n--- Grade Summary ---\n");
    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);

    return 0;
}
