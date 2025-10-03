#include <stdio.h>
int main() {
    int rain;
    printf("Enter rainfall (mm): ");
    scanf("%d", &rain);

    if (rain < 50) {
        printf("Rainfall Status: Normal\n");
    } else if (rain < 100) {
        printf("Rainfall Status: Warning\n");
    } else {
        printf("Rainfall Status: Critical\n");
    }
    return 0;
}
