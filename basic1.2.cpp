// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int score;
    
    // รับค่าคะแนนสอบ
    if (scanf("%d", &score) != 1) {
        return 1; // Handle input failure
    } // end if
    
    // TODO: Implement the cascading if-else if-else logic here
    if (score >= 80){
        printf("Grade A");
    } else if (score >= 70) {
        printf("Grade B");
    } else if (score >= 60) {
        printf("Grade C");
    } else if (score >= 50) {
        printf("Grade D");
    } else {
        printf("Grade F");
    } // end if

    return 0;
} // end main

