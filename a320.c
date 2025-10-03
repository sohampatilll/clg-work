#include <stdio.h>
int main() {
    int steps;
    printf("Enter steps walked today: ");
    scanf("%d", &steps);

    if (steps >= 10000) {
        printf("Fitness Status: Normal\n");
    } else if (steps >= 5000) {
        printf("Fitness Status: Warning\n");
    } else {
        printf("Fitness Status: Critical\n");
    }
    return 0;
}
