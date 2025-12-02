#include <stdio.h>

// Structure to store student information and scores
struct Student {
    int id;
    int mathScore;
    int scienceScore;
    int englishScore;
    int totalScore;
};

// Function to determine the final letter grade based on total score
char calculateGrade(int totalScore);

// Function to calculate the average score
void calculateAverage(int totalScore, float *avg);

int main() {
    struct Student studentInfo;
    char finalGrade;
    float finalAverage;

    printf("Enter Student ID: ");
    scanf("%d", &studentInfo.id);

    printf("Enter Math Score (out of 100): ");
    scanf("%d", &studentInfo.mathScore);

    printf("Enter Science Score (out of 100): ");
    scanf("%d", &studentInfo.scienceScore);

    printf("Enter English Score (out of 100): ");
    scanf("%d", &studentInfo.englishScore);

    // Calculate total score from all 3 subjects
    studentInfo.totalScore = studentInfo.mathScore + studentInfo.scienceScore + studentInfo.englishScore;

    // Calculate average score (total divided by 3 subjects)
    calculateAverage(studentInfo.totalScore, &finalAverage);

    // Determine grade from overall total score
    finalGrade = calculateGrade(studentInfo.totalScore);

    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("Student ID: %d\n", studentInfo.id);
    printf("Math Score: %d, Science Score: %d, English Score: %d\n",
        studentInfo.mathScore, studentInfo.scienceScore, studentInfo.englishScore);
    printf("Total Score: %d\n", studentInfo.totalScore);
    printf("Average Score: %.2f\n", finalAverage);
    printf("Final Grade: %c\n", finalGrade);

    return 0;
}

// Calculate Grade
char calculateGrade(int totalScore) {
    if (totalScore >= 250) {
        return 'A';
    } else if (totalScore >= 200) {
        return 'B';
    } else {
        return 'C';
    }
}

// Calculate Average (total / 3 subjects)
void calculateAverage(int totalScore, float *avg) {
    *avg = (float)totalScore / 3;
}
