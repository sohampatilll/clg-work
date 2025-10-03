#include <stdio.h>
int main() {
    int aqi;
    printf("Enter Air Quality Index: ");
    scanf("%d", &aqi);

    if (aqi < 100) {
        printf("Air Quality: Normal\n");
    } else if (aqi < 200) {
        printf("Air Quality: Warning\n");
    } else {
        printf("Air Quality: Critical\n");
    }
    return 0;
}
