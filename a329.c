#include <stdio.h>
int main() {
    int bpm;
    printf("Enter heartbeat (bpm): ");
    scanf("%d", &bpm);

    if (bpm >= 60 && bpm <= 100) {
        printf("Heartbeat Status: Normal\n");
    } else if ((bpm > 100 && bpm <= 120) || bpm < 60) {
        printf("Heartbeat Status: Warning\n");
    } else {
        printf("Heartbeat Status: Critical\n");
    }
    return 0;
}
