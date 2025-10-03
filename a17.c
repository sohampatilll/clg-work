#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);   // space before %c avoids newline issues
    printf("Your grade is: %c\n", grade);
    return 0;
}
