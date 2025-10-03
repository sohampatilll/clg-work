#include <stdio.h>
int main() {
    int coin1, coin2, total;
    printf("Enter number of coins 1: ");
    scanf("%d", &coin1);
    printf("Enter number of coins 2: ");
    scanf("%d", &coin2);
    total = coin1 + coin2;
    printf("Total coins = %d\n", total);
    return 0;
}
