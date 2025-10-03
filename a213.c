#include <stdio.h>
int main() {
    int o1, o2, total;
    printf("Enter number of oranges 1: ");
    scanf("%d", &o1);
    printf("Enter number of oranges 2: ");
    scanf("%d", &o2);
    total = o1 + o2;
    printf("Total oranges = %d\n", total);
    return 0;
}
