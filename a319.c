#include <stdio.h>
int main() {
    int sugar;
    printf("Enter blood sugar level: ");
    scanf("%d", &sugar);

    if (sugar < 140) {
        printf("Sugar Status: Normal\n");
    } else if (sugar < 200) {
        printf("Sugar Status: Warning\n");
    } else {
        printf("Sugar Status: Critical\n");
    }
    return 0;
}
