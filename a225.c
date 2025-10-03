#include <stdio.h>
int main() {
    int hall1, hall2, total;
    printf("Enter chairs in hall 1: ");
    scanf("%d", &hall1);
    printf("Enter chairs in hall 2: ");
    scanf("%d", &hall2);
    total = hall1 + hall2;
    printf("Total chairs = %d\n", total);
    return 0;
}
