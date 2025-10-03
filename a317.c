#include <stdio.h>
int main() {
    int weight;
    printf("Enter weight (kg): ");
    scanf("%d", &weight);

    if (weight < 60) {
        printf("Weight Status: Normal\n");
    } else if (weight <= 80) {
        printf("Weight Status: Warning\n");
    } else {
        printf("Weight Status: Critical\n");
    }
    return 0;
}
