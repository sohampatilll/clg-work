#include <stdio.h>
int main() {
    int class1, class2, total;
    printf("Enter students in class 1: ");
    scanf("%d", &class1);
    printf("Enter students in class 2: ");
    scanf("%d", &class2);
    total = class1 + class2;
    printf("Total students = %d\n", total);
    return 0;
}
