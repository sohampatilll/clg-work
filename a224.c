#include <stdio.h>
int main() {
    int v1, v2, total;
    printf("Enter vegetables 1: ");
    scanf("%d", &v1);
    printf("Enter vegetables 2: ");
    scanf("%d", &v2);
    total = v1 + v2;
    printf("Total vegetables = %d\n", total);
    return 0;
}
