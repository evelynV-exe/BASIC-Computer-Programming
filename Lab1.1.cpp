// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i;
    
    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N) != 1) {
        return 1; // Handle input failure
    } //end if

    //Error handling for zero and negative numbers
    if (N <= 0) {
        printf("Error");
        return 1;
    } // end if
    
    // TODO: Implement the for loop to print the message N times
    for (int i = 0; i < N; i++) {
        printf("Hello Loop!\n");
    } // end if

    return 0;
} // end function
