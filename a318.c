#include <stdio.h>
int main() {
    int hours;
    printf("Enter study hours: ");
    scanf("%d", &hours);

    if (hours >= 6) {
        printf("Preparation Status: Normal\n");
    } else if (hours >= 3) {
        printf("Preparation Status: Warning\n");
    } else {
        printf("Preparation Status: Critical\n");
    }
    return 0;
}
