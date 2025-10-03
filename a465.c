#include <stdio.h>
int main() {
    int units;
    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 100)
        printf("Bill = %d\n", units*5);
    else if (units <= 200)
        printf("Bill = %d\n", units*7);
    else
        printf("Bill = %d\n", units*10);

    return 0;
}
