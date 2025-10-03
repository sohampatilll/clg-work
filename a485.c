#include <stdio.h>
int main() {
    int speed;
    printf("Enter vehicle speed: ");
    scanf("%d", &speed);

    if (speed <= 60)
        printf("Normal\n");
    else if (speed <= 100)
        printf("Warning\n");
    else
        printf("Critical\n");

    return 0;
}
