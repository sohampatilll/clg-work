#include <stdio.h>
int main() {
    int n1, n2, total;
    printf("Enter number of notebooks 1: ");
    scanf("%d", &n1);
    printf("Enter number of notebooks 2: ");
    scanf("%d", &n2);
    total = n1 + n2;
    printf("Total notebooks = %d\n", total);
    return 0;
}
