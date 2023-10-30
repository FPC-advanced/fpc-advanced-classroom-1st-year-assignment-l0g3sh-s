#include <stdio.h>

// Function to input the side lengths of the triangle
int input_side() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    return side;
}

// Function to check if a triangle is scalene
int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1; // It's a scalene triangle
    } else {
        return 0; // It's not a scalene triangle
    }
}

// Function to display the side lengths and whether the triangle is scalene
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

    // Input the side lengths
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    // Check if it's a scalene triangle
    int isscalene = check_scalene(side1, side2, side3);

    // Display the result
    output(side1, side2, side3, isscalene);

    return 0;
}
