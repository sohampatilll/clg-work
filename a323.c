#include <stdio.h>
int main() {
    int rank;
    printf("Enter exam rank: ");
    scanf("%d", &rank);

    if (rank <= 1000) {
        printf("Rank Status: Normal\n");
    } else if (rank <= 5000) {
        printf("Rank Status: Warning\n");
    } else {
        printf("Rank Status: Critical\n");
    }
    return 0;
}
