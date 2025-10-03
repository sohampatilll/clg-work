#include <stdio.h>
int main() {
    int pen1, pen2, total;
    printf("Enter number of pens 1: ");
    scanf("%d", &pen1);
    printf("Enter number of pens 2: ");
    scanf("%d", &pen2);
    total = pen1 + pen2;
    printf("Total pens = %d\n", total);
    return 0;
}
