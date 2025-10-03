#include <stdio.h>
int main() {
    int load;
    printf("Enter machine load (kg): ");
    scanf("%d", &load);

    if (load <= 50) {
        printf("Load Status: Normal\n");
    } else if (load <= 80) {
        printf("Load Status: Warning\n");
    } else {
        printf("Load Status: Critical\n");
    }
    return 0;
}
