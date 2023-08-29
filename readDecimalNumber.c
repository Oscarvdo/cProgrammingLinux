#include <stdio.h>

int main() {
    double kilometers, miles;
    const double conversionFactor = 0.621371;

    // Ask the user for the distance in kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%lf", &kilometers);

    // Convert kilometers to miles
    miles = kilometers * conversionFactor;

    // Print the distance in miles with 6 decimal places
    printf("The distance in miles is: %.6lf\n", miles);

    return 0;
}



/*
Petra, Rémi and their families went hiking in the mountains together and realized that distances are measured in different units in France and the United States. To help them convert between units, please write a program that reads a decimal number representing a distance in kilometers and that prints out the corresponding distance in miles with 6 decimal places. 

You may use the fact that one kilometer equals 0.621371 miles. 

Example
Input:
4.8
Output: 
2.982581
*/
