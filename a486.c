#include <stdio.h>
int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 20)
        printf("Cold\n");
    else if (temp <= 35)
        printf("Normal\n");
    else
        printf("Hot\n");

    return 0;
}
