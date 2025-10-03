#include <stdio.h>
int main() {
    int a1, a2, total;
    printf("Enter number of apples 1: ");
    scanf("%d", &a1);
    printf("Enter number of apples 2: ");
    scanf("%d", &a2);
    total = a1 + a2;
    printf("Total apples = %d\n", total);
    return 0;
}
