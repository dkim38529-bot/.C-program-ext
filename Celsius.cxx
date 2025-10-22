/*
name :Derrick Mathenge 
Reg no:CT100/26181/25
description:conversion to degrees celsius
*/

#include <stdio.h>


float toCelsius(float fahrenheit) {
    float celsius = (5.0 / 9.0) * (fahrenheit - 32);
    return celsius;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float c = toCelsius(f);
    printf("Temperature in Celsius: %.2f\n", c);

    return 0;
}
