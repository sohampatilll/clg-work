#include <stdio.h>
int main() {
    int s1, s2, result;
    printf("Enter Sensor 1 reading: ");
    scanf("%d", &s1);
    printf("Enter Sensor 2 reading: ");
    scanf("%d", &s2);
    result = s1 - s2;
    printf("Difference = %d\n", result);
    return 0;
}
