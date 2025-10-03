#include <stdio.h>
int main() {
    int w1, w2, sum;
    printf("Enter weight 1: ");
    scanf("%d", &w1);
    printf("Enter weight 2: ");
    scanf("%d", &w2);
    sum = w1 + w2;
    printf("Total weight = %d\n", sum);
    return 0;
}
