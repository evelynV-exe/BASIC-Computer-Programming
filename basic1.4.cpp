// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, total = 0, i;

    if (scanf("%d", &N) != 1) {
        return 1;
    }
    
    for (int i = 1; i <= N; i++) {
        total += i;
    }

    printf("%d\n", total);
    return 0;
}
