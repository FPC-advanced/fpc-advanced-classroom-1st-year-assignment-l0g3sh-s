#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction smallest);

int main() {
    Fraction fraction1, fraction2, fraction3, smallest;

    printf("Enter the first fraction (numerator denominator): ");
    fraction1 = input_fraction();

    printf("Enter the second fraction (numerator denominator): ");
    fraction2 = input_fraction();

    printf("Enter the third fraction (numerator denominator): ");
    fraction3 = input_fraction();

    smallest = smallest_fraction(fraction1, fraction2, fraction3);
    output(smallest);

    return 0;
}

Fraction input_fraction() {
    Fraction f;
    scanf("%d %d", &f.num, &f.den);
    return f;
}

Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3) {
    double value1 = (double)f1.num / f1.den;
    double value2 = (double)f2.num / f2.den;
    double value3 = (double)f3.num / f3.den;

    if (value1 <= value2 && value1 <= value3) {
        return f1;
    } else if (value2 <= value1 && value2 <= value3) {
        return f2;
    } else {
        return f3;
    }
}

void output(Fraction smallest) {
    printf("The smallest fraction is %d/%d\n", smallest.num, smallest.den);
}
