#include <stdio.h>
int main() {
    int d1, d2, sum;
    printf("Enter distance 1: ");
    scanf("%d", &d1);
    printf("Enter distance 2: ");
    scanf("%d", &d2);
    sum = d1 + d2;
    printf("Total distance = %d\n", sum);
    return 0;
}
