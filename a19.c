#include <stdio.h>
int main() {
    char town[40];
    printf("Enter your hometown: ");
    scanf("%39s", town);
    printf("Your hometown is: %s\n", town);
    return 0;
}
