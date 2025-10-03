#include <stdio.h>
int main() {
    char first[20], last[20];
    printf("Enter your first and last name: ");
    scanf("%19s %19s", first, last);
    printf("Your full name is: %s %s\n", first, last);
    return 0;
}
