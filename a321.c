#include <stdio.h>
int main() {
    int health;
    printf("Enter battery health (%%): ");
    scanf("%d", &health);

    if (health >= 80) {
        printf("Battery Health: Normal\n");
    } else if (health >= 50) {
        printf("Battery Health: Warning\n");
    } else {
        printf("Battery Health: Critical\n");
    }
    return 0;
}
