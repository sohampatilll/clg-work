#include <stdio.h>
int main() {
    int room1, room2, total;
    printf("Enter chairs in room 1: ");
    scanf("%d", &room1);
    printf("Enter chairs in room 2: ");
    scanf("%d", &room2);
    total = room1 + room2;
    printf("Total chairs = %d\n", total);
    return 0;
}
