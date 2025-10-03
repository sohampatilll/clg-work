#include <stdio.h>
int main() {
    int m1, m2, total;
    printf("Enter marbles 1: ");
    scanf("%d", &m1);
    printf("Enter marbles 2: ");
    scanf("%d", &m2);
    total = m1 + m2;
    printf("Total marbles = %d\n", total);
    return 0;
}
