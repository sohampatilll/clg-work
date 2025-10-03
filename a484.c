#include <stdio.h>
int main() {
    int ph;
    printf("Enter water pH: ");
    scanf("%d", &ph);

    if (ph >= 7 && ph <= 8)
        printf("Water is Normal\n");
    else if (ph >= 5 && ph <= 9)
        printf("Water is Warning\n");
    else
        printf("Water is Critical\n");

    return 0;
}
