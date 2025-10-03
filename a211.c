#include <stdio.h>
int main() {
    int m1, m2, total;
    printf("Enter minutes 1: ");
    scanf("%d", &m1);
    printf("Enter minutes 2: ");
    scanf("%d", &m2);
    total = m1 + m2;
    printf("Total minutes = %d\n", total);
    return 0;
}
