#include <stdio.h>
int main() {
    int speed;
    printf("Enter your internet speed (Mbps): ");
    scanf("%d", &speed);

    if (speed >= 50) {
        printf("Speed Status: Normal\n");
    } else if (speed >= 20) {
        printf("Speed Status: Warning\n");
    } else {
        printf("Speed Status: Critical\n");
    }
    return 0;
}
