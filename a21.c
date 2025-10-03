#include <stdio.h>

int main() {
    int sensor1, sensor2, sum;

    printf("Enter reading from Sensor 1: ");
    scanf("%d", &sensor1);

    printf("Enter reading from Sensor 2: ");
    scanf("%d", &sensor2);
    sum = sensor1 + sensor2;

    printf("Sum of sensor readings = %d\n", sum);

    return 0;
}
