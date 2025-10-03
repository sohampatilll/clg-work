#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Multiple of 5\n");
    else
        printf("Not a multiple of 5\n");

    return 0;
}
