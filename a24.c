#include <stdio.h>
int main() {
    int s1, s2, product;
    printf("Enter Sensor 1 reading: ");
    scanf("%d", &s1);
    printf("Enter Sensor 2 reading: ");
    scanf("%d", &s2);
    product = s1 * s2;
    printf("Product of readings = %d\n", product);
    return 0;
}
