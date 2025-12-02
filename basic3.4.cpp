#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    int passCount = 0, failCount = 0;

    // Read number of students
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    struct Student students[N];

    // Read student info (id, score, name)
    for (i = 0; i < N; i++) {
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            return 1;
        }
    }

    // Count pass/fail students
    for (i = 0; i < N; i++) {
        if (students[i].score >= 60.0) {
            passCount++;
        } else {
            failCount++;
        }
    }

    // output
    printf("Pass count: %d\n", passCount);
    printf("Fail count: %d\n", failCount);

    return 0;
}
