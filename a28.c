#include <stdio.h>
int main() {
    int score1, score2, total;
    printf("Enter score 1: ");
    scanf("%d", &score1);
    printf("Enter score 2: ");
    scanf("%d", &score2);
    total = score1 + score2;
    printf("Total score = %d\n", total);
    return 0;
}
