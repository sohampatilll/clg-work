#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 60) {
        printf("Result: Normal (Pass)\n");
    } else if (marks >= 40) {
        printf("Result: Warning\n");
    } else {
        printf("Result: Critical (Fail)\n");
    }
    return 0;
}
