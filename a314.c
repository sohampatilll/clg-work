#include <stdio.h>
int main() {
    int usage;
    printf("Enter hard disk usage (in %%): ");
    scanf("%d", &usage);

    if (usage < 70) {
        printf("Disk Status: Normal\n");
    } else if (usage < 90) {
        printf("Disk Status: Warning\n");
    } else {
        printf("Disk Status: Critical\n");
    }
    return 0;
}
