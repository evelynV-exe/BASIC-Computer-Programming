#include <stdio.h>
#include <string.h>

struct SalesRecord {
    char name[50];
    float target;
    float actual;
};

float calculateCommission(float target, float actual) {
    float commission = actual * 0.10; // base 10%

    if (actual >= target * 1.20) {
        commission += 200.0; // high bonus
    } else if (actual >= target) {
        commission += 50.0; // basic reward
    } else if (actual < target * 0.90) {
        commission -= 100.0; // penalty
    }
    return commission;
}

int main(void) {
    int numRecords;
    float grandTotalCommission = 0.0;

    printf("Enter number of salesperson records: ");
    if (scanf("%d", &numRecords) != 1 || numRecords <= 0) {
        printf("Invalid number of records.\n");
        return 1;
    }

    struct SalesRecord records[numRecords];

    for (int i = 0; i < numRecords; i++) {
        printf("\nRecord %d (target actual name): ", i + 1);

        if (scanf("%f %f %s", &records[i].target, &records[i].actual, records[i].name) != 3) {
            printf("Invalid input detected.\n");
            return 1;
        }

        float commission = calculateCommission(records[i].target, records[i].actual);
        grandTotalCommission += commission;
    }

    printf("\n--- Commission Summary ---\n");
    printf("Grand Total Commission: %.2f\n", grandTotalCommission);

    return 0;
}
