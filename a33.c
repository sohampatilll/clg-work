#include <stdio.h>
int main() {
    int battery;
    printf("Enter battery percentage: ");
    scanf("%d", &battery);

    if (battery > 50) {
        printf("Battery Status: Normal\n");
    } else if (battery > 20) {
        printf("Battery Status: Warning\n");
    } else {
        printf("Battery Status: Critical\n");
    }
    return 0;
}
