#include <stdio.h>
int main() {
    int temp1, temp2, sum;
    printf("Enter temperature 1: ");
    scanf("%d", &temp1);
    printf("Enter temperature 2: ");
    scanf("%d", &temp2);
    sum = temp1 + temp2;
    printf("Sum of temperatures = %d\n", sum);
    return 0;
}
