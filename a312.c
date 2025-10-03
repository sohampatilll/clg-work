#include <stdio.h>
int main() {
    int fuel;
    printf("Enter fuel level (in liters): ");
    scanf("%d", &fuel);

    if (fuel > 20) {
        printf("Fuel Status: Normal\n");
    } else if (fuel > 5) {
        printf("Fuel Status: Warning\n");
    } else {
        printf("Fuel Status: Critical\n");
    }
    return 0;
}
