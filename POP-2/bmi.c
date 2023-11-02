#include <stdio.h>

int main() {
    float h, w, BMI;

    // Get user input for height and weight
    printf("Enter height in centimeters: ");
    scanf("%f", &h);

    printf("Enter weight in kilograms: ");
    scanf("%f", &w);

    BMI = (w / (h / 100.0) / (h / 100.0));  // Convert height to meters
    printf("BMI: %.2f\n", BMI);

    return 0;
}
