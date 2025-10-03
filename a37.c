#include <stdio.h>
int main() {
    int level;
    printf("Enter water level (in %): ");
    scanf("%d", &level);

    if (level > 70) {
        printf("Tank Status: Normal\n");
    } else if (level > 30) {
        printf("Tank Status: Warning\n");
    } else {
        printf("Tank Status: Critical\n");
    }
    return 0;
}
