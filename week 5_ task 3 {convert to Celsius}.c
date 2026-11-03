#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    printf("Temperature in Celsius = %.2f\n", convertToCelsius(f));
    return 0;
}