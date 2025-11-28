#include <stdio.h>

//calculate win and odds function
float calculateWinOdds(int outs) {
    float percent = outs * 4;
    return percent;
}

int main() {
    int cardOuts;
    float winProbability;

    printf("Enter the card outs: ");
    scanf("%d", &cardOuts);

    winProbability = calculateWinOdds(cardOuts);

    printf("\n--- POKER PROBABILITY REPORT (2 Cards Remaining) ---\n");
    printf("Calculated Outs: %d\n", cardOuts);
    printf("Win Probability (Odds x 4): %.2f%%\n", winProbability);

    printf("Assessment: ");

    if (winProbability >= 0.30) {
        printf("HIGH Win Probability");
    } else {
        printf("LOW Win Probaility");
    }
}