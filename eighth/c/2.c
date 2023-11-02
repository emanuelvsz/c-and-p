#include <stdio.h>

void converterKelvinParaCelsiusFahrenheit(float tempKelvin, float *tempCelsius, float *tempFahrenheit) {
    *tempCelsius = tempKelvin - 273.15;
    *tempFahrenheit = (tempKelvin - 273.15) * 9/5 + 32;
}

int main() {
    float tempKelvin = 300;
    float tempCelsius, tempFahrenheit;
    converterKelvinParaCelsiusFahrenheit(tempKelvin, &tempCelsius, &tempFahrenheit);
    printf("A temperatura em graus Celsius é: %.2f°C\n", tempCelsius);
    printf("A temperatura em graus Fahrenheit é: %.2f°F\n", tempFahrenheit);
    return 0;
}
