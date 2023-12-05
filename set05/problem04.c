#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main() {
    float radius, height, length;
    int mood;

    input_camel_details(&radius, &height, &length);
    mood = find_mood(radius, height, length);
    output(radius, height, length, mood);

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

int find_mood(float radius, float height, float length) {
    if (radius < height && radius < length) {
        return 0; // Sick
    } else if (height < length && height < radius) {
        return 1; // Happy
    } else if (length < height && length < radius) {
        return 2; // Tense
    } else {
        return -1; // Indeterminate or neutral mood
    }
}

void output(float radius, float height, float length, int mood) {
    switch (mood) {
        case 0:
            printf("Camel with:\nStomach radius: %.2f\nHeight: %.2f\nLength: %.2f\nMood: Sick\n", radius, height, length);
            break;
        case 1:
            printf("Camel with:\nStomach radius: %.2f\nHeight: %.2f\nLength: %.2f\nMood: Happy\n", radius, height, length);
            break;
        case 2:
            printf("Camel with:\nStomach radius: %.2f\nHeight: %.2f\nLength: %.2f\nMood: Tense\n", radius, height, length);
            break;
        default:
            printf("Camel with:\nStomach radius: %.2f\nHeight: %.2f\nLength: %.2f\nMood: Neutral\n", radius, height, length);
            break;
    }
}
