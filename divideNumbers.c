#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Ask the user for the temperature in degrees Celsius
    printf("Enter the temperature in degrees Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;

    // Print the temperature in Fahrenheit with 1 decimal place
    printf("The temperature in degrees Fahrenheit is: %.1lf\n", fahrenheit);

    return 0;
}


/*
When Rémi came to the US (to visit Petra to make this MOOC) he brought his favorite cookie recipe! When trying to bake the cookies he realized that ovens in the US show temperature in degrees Fahrenheit, but the cookie recipe called for a temperature in degrees Celsius. We need your help!

Please write a C-program that reads a decimal number representing a temperature in degrees Celsius and prints out the corresponding temperature in degrees Fahrenheit with 1 decimal place. Here is the conversion formula:

Temperature (°F) = Temperature (°C) × 9.0 / 5.0 + 32.0

Examples
Input:
192
Output:
377.6
 

Input:
30.5
Output:
86.9
  */
