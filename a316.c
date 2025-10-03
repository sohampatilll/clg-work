#include <stdio.h>
int main() {
    int noise;
    printf("Enter noise level (dB): ");
    scanf("%d", &noise);

    if (noise < 50) {
        printf("Noise Status: Normal\n");
    } else if (noise < 80) {
        printf("Noise Status: Warning\n");
    } else {
        printf("Noise Status: Critical\n");
    }
    return 0;
}
