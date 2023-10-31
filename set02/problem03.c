#include <stdio.h>


int input_number() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    return number;
}


int is_composite(int n) {
    if (n <= 1) {
        return 0; 
    }
    
    int factors = 0; 

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            factors++;
        }
    }
    return factors > 2;
}

void output(int n, int result) {
    printf("%d is %scomposite.\n", n, result ? "" : "not ");
}

int main() {
    int number = input_number();
    int result = is_composite(number);
    output(number, result);
    return 0;
}
