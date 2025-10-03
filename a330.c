#include <stdio.h>
int main() {
    int oil;
    printf("Enter engine oil level (%%): ");
    scanf("%d", &oil);

    if (oil >= 70) {
        printf("Oil Status: Normal\n");
    } else if (oil >= 40) {
        printf("Oil Status: Warning\n");
    } else {
        printf("Oil Status: Critical\n");
    }
    return 0;
}
