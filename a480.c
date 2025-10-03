#include <stdio.h>
int main() {
    int pass;
    printf("Enter password: ");
    scanf("%d", &pass);

    if (pass == 1234)
        printf("Access Granted\n");
    else
        printf("Access Denied\n");

    return 0;
}
