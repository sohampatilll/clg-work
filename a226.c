#include <stdio.h>
int main() {
    int cup1, cup2, total;
    printf("Enter cups of tea 1: ");
    scanf("%d", &cup1);
    printf("Enter cups of tea 2: ");
    scanf("%d", &cup2);
    total = cup1 + cup2;
    printf("Total cups of tea = %d\n", total);
    return 0;
}
