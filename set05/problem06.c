#include <stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main()
{
    int n;
    float avg;
    n = input_n();
    int a[n];
    input(n, a);
    avg = odd_average(n, a);
    output(avg);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    return n;
}
void input(int n, int a[n])
{
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
float odd_average(int n, int a[n])
{
    float avg;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            avg = avg + i;
        }
    }
    return avg;
}
void output(float avg)
{
    printf("Average of all the odd elements is: %0.1f", avg);
}