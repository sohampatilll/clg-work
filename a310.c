#include <stdio.h>
int main() {
    int speed;
    printf("Enter car speed (km/h): ");
    scanf("%d", &speed);

    if (speed <= 60) {
        printf("Driving Status: Normal\n");
    } else if (speed <= 100) {
        printf("Driving Status: Warning\n");
    } else {
        printf("Driving Status: Critical\n");
    }
    return 0;
}
