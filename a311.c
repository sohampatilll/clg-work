#include <stdio.h>
int main() {
    int oxygen;
    printf("Enter oxygen level (SpO2): ");
    scanf("%d", &oxygen);

    if (oxygen >= 95) {
        printf("Oxygen Status: Normal\n");
    } else if (oxygen >= 90) {
        printf("Oxygen Status: Warning\n");
    } else {
        printf("Oxygen Status: Critical\n");
    }
    return 0;
}
