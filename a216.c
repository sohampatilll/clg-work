#include <stdio.h>
int main() {
    int c1, c2, total;
    printf("Enter number of chairs 1: ");
    scanf("%d", &c1);
    printf("Enter number of chairs 2: ");
    scanf("%d", &c2);
    total = c1 + c2;
    printf("Total chairs = %d\n", total);
    return 0;
}
