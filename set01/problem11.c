#include <stdio.h>

struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    Complex num1, num2, result;

    num1 = input_complex();
    num2 = input_complex();

    result = add_complex(num1, num2);
    output(num1, num2, result);

    return 0;
}

Complex input_complex() {
    Complex num;
    printf("Enter the real part: ");
    scanf("%f", &num.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("Sum of complex numbers:\n");
    printf("Number 1: %.2f + %.2fi\n", a.real, a.imaginary);
    printf("Number 2: %.2f + %.2fi\n", b.real, b.imaginary);
    printf("Result: %.2f + %.2fi\n", sum.real, sum.imaginary);
}
