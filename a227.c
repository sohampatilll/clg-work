#include <stdio.h>
int main() {
    int jar1, jar2, total;
    printf("Enter candies in jar 1: ");
    scanf("%d", &jar1);
    printf("Enter candies in jar 2: ");
    scanf("%d", &jar2);
    total = jar1 + jar2;
    printf("Total candies = %d\n", total);
    return 0;
}
