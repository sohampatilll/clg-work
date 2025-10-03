#include <stdio.h>
int main() {
    int temp;
    printf("Enter body temperature (°F): ");
    scanf("%d", &temp);

    if (temp < 100) {
        printf("Fever Status: Normal\n");
    } else if (temp < 103) {
        printf("Fever Status: Warning\n");
    } else {
        printf("Fever Status: Critical\n");
    }
    return 0;
}
