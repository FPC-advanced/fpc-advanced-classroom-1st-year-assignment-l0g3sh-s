#include <stdio.h>

void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main() {
    int num1, num2, num3, largest;

    input(&num1, &num2, &num3);
    compare(num1, num2, num3, &largest);
    output(num1, num2, num3, largest);

    return 0;
}

void input(int *a, int *b, int *c) {
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest) {
    if (a >= b && a >= c) {
        *largest = a;
    } else if (b >= a && b >= c) {
        *largest = b;
    } else {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);
}
