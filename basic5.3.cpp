#include <stdio.h>
#define SIZE 5

int calculateSum(int array[], int size) {
    int totalSum;
    for (int i = 0; i < SIZE; i++) {
        totalSum += array[i];
    }

    return totalSum;
}

int main() {
    int numbers[SIZE];
    int totalSum;
    float average;
    int i;

    printf("Enter %d integer numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    totalSum = calculateSum(numbers, SIZE);
    average = (float)totalSum / SIZE; 

    printf("\n--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", totalSum);
    printf("Average: %.2f\n", average);

    return 0;
}