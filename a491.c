#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0)
        printf("Divisible by 2 and 3\n");
    else
        printf("Not divisible by both\n");

    return 0;
}
