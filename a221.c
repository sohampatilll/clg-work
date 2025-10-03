#include <stdio.h>
int main() {
    int b1, b2, total;
    printf("Enter water bottles 1: ");
    scanf("%d", &b1);
    printf("Enter water bottles 2: ");
    scanf("%d", &b2);
    total = b1 + b2;
    printf("Total bottles = %d\n", total);
    return 0;
}
