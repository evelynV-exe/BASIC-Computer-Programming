#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    
    if (num >= 80){
        printf("Grade A");
    } else if (num >= 70) {
        printf("Grade B");
    } else if (num >= 60) {
        printf("Grade C");
    } else if (num >= 50) {
        printf("Grade D");
    } else {
        printf("Grade F");
    }

    return 0;
}
