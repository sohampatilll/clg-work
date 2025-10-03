#include <stdio.h>
int main() {
    int signal;
    printf("Enter signal strength (dBm): ");
    scanf("%d", &signal);

    if (signal > -70) {
        printf("Signal Status: Normal\n");
    } else if (signal > -90) {
        printf("Signal Status: Warning\n");
    } else {
        printf("Signal Status: Critical\n");
    }
    return 0;
}

