#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() {
    float number, sqrroot;

    number = input();
    sqrroot = square_root(number);
    output(number, sqrroot);

    return 0;
}

float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}

float square_root(float n) {
    if (n < 0) {
        printf("Cannot calculate the square root of a negative number.\n");
        return 0.0;
    } else {
        return sqrt(n);
    }
}

void output(float n, float sqrroot) {
    if (sqrroot > 0) {
        printf("The square root of %.2f is %.2f\n", n, sqrroot);
    }
}
