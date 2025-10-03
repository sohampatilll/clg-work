#include <stdio.h>
int main() {
    int pulse;
    printf("Enter your pulse rate: ");
    scanf("%d", &pulse);

    if (pulse < 70) {
        printf("Status: Normal\n");
    } else if (pulse < 100) {
        printf("Status: Warning\n");
    } else {
        printf("Status: Critical\n");
    }
    return 0;
}
