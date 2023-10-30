#include <stdio.h>

void input_side(int *side) {
    printf("Enter the length of a side: ");
    scanf("%d", side);
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // It's a scalene triangle
    } else {
        return 0; // It's not a scalene triangle
    }
}

void output(int a, int b, int c, int isscalene) {
    printf("Side 1: %d\n", a);
    printf("Side 2: %d\n", b);
    printf("Side 3: %d\n", c);

    if (isscalene) {
        printf("The triangle is scalene.\n");
    } else {
        printf("The triangle is not scalene.\n");
    }
}

int main() {
    int side1, side2, side3;

    input_side(&side1);
    input_side(&side2);
    input_side(&side3);

    int isscalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, isscalene);

    return 0;
}
