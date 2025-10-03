#include <stdio.h>
int main() {
    int time;
    printf("Enter server response time (ms): ");
    scanf("%d", &time);

    if (time < 200) {
        printf("Response Status: Normal\n");
    } else if (time < 500) {
        printf("Response Status: Warning\n");
    } else {
        printf("Response Status: Critical\n");
    }
    return 0;
}
