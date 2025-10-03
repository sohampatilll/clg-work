#include <stdio.h>
int main() {
    int amount;
    printf("Enter purchase amount: ");
    scanf("%d", &amount);

    if (amount >= 1000)
        printf("Discount = 20%%\n");
    else if (amount >= 500)
        printf("Discount = 10%%\n");
    else
        printf("No Discount\n");

    return 0;
}
