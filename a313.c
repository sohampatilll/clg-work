#include <stdio.h>
int main() {
    int attendance;
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    if (attendance >= 75) {
        printf("Attendance Status: Normal\n");
    } else if (attendance >= 50) {
        printf("Attendance Status: Warning\n");
    } else {
        printf("Attendance Status: Critical\n");
    }
    return 0;
}
