#include <stdio.h>
int main() {
    int h1, h2, sum;
    printf("Enter hours 1: ");
    scanf("%d", &h1);
    printf("Enter hours 2: ");
    scanf("%d", &h2);
    sum = h1 + h2;
    printf("Total hours = %d\n", sum);
    return 0;
}
