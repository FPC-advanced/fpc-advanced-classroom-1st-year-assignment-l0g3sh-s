#include <stdio.h>


void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);
    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}


void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}


 
void output(float area) {
    
    printf("Area: %.2f\n", area);
}

int main() {
    float base, height, area;

   
    input(&base, &height);

    find_area(base, height, &area);

    
    output(area);

    return 0;
}
