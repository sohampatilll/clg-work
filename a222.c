#include <stdio.h>
int main() {
    int c1, c2, total;
    printf("Enter candies 1: ");
    scanf("%d", &c1);
    printf("Enter candies 2: ");
    scanf("%d", &c2);
    total = c1 + c2;
    printf("Total candies = %d\n", total);
    return 0;
}
