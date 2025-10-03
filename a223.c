#include <stdio.h>
int main() {
    int f1, f2, total;
    printf("Enter fruits 1: ");
    scanf("%d", &f1);
    printf("Enter fruits 2: ");
    scanf("%d", &f2);
    total = f1 + f2;
    printf("Total fruits = %d\n", total);
    return 0;
}
