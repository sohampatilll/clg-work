#include <stdio.h>
int main() {
    float quake;
    printf("Enter Richter scale value: ");
    scanf("%f", &quake);

    if (quake < 4.0) {
        printf("Quake Status: Normal\n");
    } else if (quake < 6.0) {
        printf("Quake Status: Warning\n");
    } else {
        printf("Quake Status: Critical\n");
    }
    return 0;
}
