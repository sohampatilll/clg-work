#include <stdio.h>

int main() {
    int duty, period;

    printf("Enter duty cycle: ");
    scanf("%d", &duty);

    printf("Enter period: ");
    scanf("%d", &period);

    printf("PWM Simulation:\n");

    for (int i = 0; i < duty; i++) {
        printf("1 ");
    }
    for (int i = duty; i < period; i++) {
        printf("0 ");
    }

    printf("\n");
    return 0;
}
