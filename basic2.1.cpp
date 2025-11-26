// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int loop, i;
    
    if (scanf("%d", &loop) != 1) {
        return 1;
    }

    if (loop <= 0) {
        printf("Error");
    }
    
    for (i = 0; i < loop; i++) {
        printf("Hello Loop!\n");
    }

    return 0;
}
