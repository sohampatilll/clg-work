#include <stdio.h>
int main() {
    int cup1, cup2, total;
    printf("Enter cups of water 1: ");
    scanf("%d", &cup1);
    printf("Enter cups of water 2: ");
    scanf("%d", &cup2);
    total = cup1 + cup2;
    printf("Total cups = %d\n", total);
    return 0;
}
