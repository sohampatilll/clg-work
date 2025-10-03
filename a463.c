#include <stdio.h>
int main() {
    char light;
    printf("Enter signal (R/Y/G): ");
    scanf(" %c", &light);

    if (light == 'R')
        printf("STOP\n");
    else if (light == 'Y')
        printf("WAIT\n");
    else if (light == 'G')
        printf("GO\n");
    else
        printf("Invalid\n");

    return 0;
}
