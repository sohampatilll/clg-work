#include <stdio.h>
int main() {
    int b1, b2, total;
    printf("Enter number of books 1: ");
    scanf("%d", &b1);
    printf("Enter number of books 2: ");
    scanf("%d", &b2);
    total = b1 + b2;
    printf("Total books = %d\n", total);
    return 0;
}
