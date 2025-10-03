#include <stdio.h>
#include <string.h>
int main() {
    char name[20];
    printf("Enter username: ");
    scanf("%s", name);

    if (strcmp(name, "admin") == 0)
        printf("Welcome Admin\n");
    else
        printf("Unknown User\n");

    return 0;
}
