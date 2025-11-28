#include <stdio.h>
#define MONTHS 3

int analyzeProfitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr) {
    int totalRev = 0;
    int totalExp = 0;
    int netProfit;

    for (int i = 0; i < size; i++) {
        totalRev += rev_ptr[i];
        totalExp += exp_ptr[i];
    }

    netProfit = totalRev - totalExp;

    if (netProfit < 0) {
        *status_ptr = 0;
    } else {
        *status_ptr = 1;
    }

    return netProfit;
}

void getMonthlyData(int array[], int size, const char *type) {
    printf("\nEnter %d months of %s values:\n", size, type);
    for (int i = 0; i < size; i++) {
        printf("Month %d %s: ", i + 1, type);
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            array[i] = 0;

            while (getchar() != '\n');
        }
    }
}

void printMonthlyData(int array[], int size, const char *type) {
    long total = 0;
    for (int i = 0; i < size; i++) {
        total += array[i];
    }
    printf("TOTAL %s: %ld\n", type, total);
}

int main() {
    int monthlyRevenue[MONTHS];
    int monthlyExpense[MONTHS];
    int netProfit;
    int businessStatus;

    getMonthlyData(monthlyRevenue, MONTHS, "REVENUE");
    getMonthlyData(monthlyExpense, MONTHS, "EXPENSE");

    netProfit = analyzeProfitability(monthlyRevenue, monthlyExpense, MONTHS, &businessStatus);

    printf("\n--- 3 MONTHS FINANCIAL ANALYSIS REPORT ---\n");
    printMonthlyData(monthlyRevenue, MONTHS, "REVENUE");
    printMonthlyData(monthlyExpense, MONTHS, "EXPENSE");

    printf("\nNET PROFIT: %d\n", netProfit);
    printf("BUSINESS STATUS: ");

    if (businessStatus == 0) {
        printf("Unprofitable");
    } else {
        printf("profitable");
    }

    return 0;
}