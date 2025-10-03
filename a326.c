#include <stdio.h>
int main() {
    int bp;
    printf("Enter blood pressure (systolic): ");
    scanf("%d", &bp);

    if (bp < 120) {
        printf("BP Status: Normal\n");
    } else if (bp < 140) {
        printf("BP Status: Warning\n");
    } else {
        printf("BP Status: Critical\n");
    }
    return 0;
}
