#include <stdio.h>

int main() {
    int temp;

    printf("Enter your temperature: ");
    scanf("%d", &temp);

    if (temp < 90) {
        printf("Patient Status: Normal\n");
    }
    else if (temp >= 90 && temp < 100) {
        printf("Patient Status: Warning\n");
    }
    else {
        printf("Patient Status: Critical\n");
    }

    return 0;
}

