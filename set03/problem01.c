#include <stdio.h>
#include <math.h>

void input(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter the coordinates of Point 1 (x1 y1): ");
    scanf("%f %f", x1, y1);

    printf("Enter the coordinates of Point 2 (x2 y2): ");
    scanf("%f %f", x2, y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void output(float x1, float y1, float x2, float y2, float distance) {
    printf("Point 1: (%.2f, %.2f)\n", x1, y1);
    printf("Point 2: (%.2f, %.2f)\n", x2, y2);
    printf("Distance between the two points: %.2f\n", distance);
}

int main() {
    float x1, y1, x2, y2;
    input(&x1, &y1, &x2, &y2);

    float distance = find_distance(x1, y1, x2, y2);

    output(x1, y1, x2, y2, distance);

    return 0;
}
