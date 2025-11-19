// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int score;
    
    // รับค่าคะแนนสอบ
    if (scanf("%d", &score) != 1) {
        return 1; // Handle input failure
    } // end if
    
    // TODO: Implement the cascading if-else if-else logic here
    if (score < 0 || score > 100) {
        printf("Invalid score\n");
    } else if (score >= 80){
        printf("Grade A\n");
    } else if (score >= 70) {
        printf("Grade B\n");
    } else if (score >= 60) {
        printf("Grade C\n");
    } else if (score >= 50) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    } // end if

    return 0;
} // end main
