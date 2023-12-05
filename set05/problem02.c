#include <stdio.h>
#include <math.h>

#define PI 3.14159

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main() {
    float radius, height, length, weight;

    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);

    return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter the stomach radius of the camel: ");
    scanf("%f", radius);

    printf("Enter the height of the camel: ");
    scanf("%f", height);

    printf("Enter the length of the camel: ");
    scanf("%f", length);
}

float find_weight(float radius, float height, float length) {
    return PI * pow(radius, 3) * sqrt(height * length);
}

void output(float radius, float height, float length, float weight) {
    printf("Stomach radius: %.2f\nHeight: %.2f\nLength: %.2f\nWeight of the camel: %.2f\n",
           radius, height, length, weight);
}
