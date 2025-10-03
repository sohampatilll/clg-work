#include <stdio.h>
int main() {
    int p1, p2, total;
    printf("Enter number of pencils 1: ");
    scanf("%d", &p1);
    printf("Enter number of pencils 2: ");
    scanf("%d", &p2);
    total = p1 + p2;
    printf("Total pencils = %d\n", total);
    return 0;
}
