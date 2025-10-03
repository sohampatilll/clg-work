#include <stdio.h>
int main() {
    int bottle1, bottle2, total;
    printf("Enter bottles of juice 1: ");
    scanf("%d", &bottle1);
    printf("Enter bottles of juice 2: ");
    scanf("%d", &bottle2);
    total = bottle1 + bottle2;
    printf("Total bottles of juice = %d\n", total);
    return 0;
}
