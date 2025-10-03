#include <stdio.h>
int main() {
    int temp;
    printf("Enter CPU temperature: ");
    scanf("%d", &temp);

    if (temp < 70) {
        printf("CPU Status: Normal\n");
    } else if (temp < 85) {
        printf("CPU Status: Warning\n");
    } else {
        printf("CPU Status: Critical\n");
    }
    return 0;
}
