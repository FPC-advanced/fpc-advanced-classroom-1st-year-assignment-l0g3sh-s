#include <stdio.h>

int input() {
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    return num;
}

int find_fibo(int n) {
    if (n <= 1) {
        return n; 
    }
    int a = 0, b = 1, fib;
    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

void output(int n, int fibo) {
    printf("The %dth number in the Fibonacci sequence is: %d\n", n, fibo);
}

int main() {
    int number = input();
    int fib = find_fibo(number);
    output(number, fib);
    return 0;
}
