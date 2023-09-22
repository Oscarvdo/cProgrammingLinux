#include <stdio.h>

int main() {
    int numCities, cityPopulation, count = 0;

    // Read the number of cities
    scanf("%d", &numCities);

    // Loop through the cities and count those with a population greater than 10,000
    for (int i = 0; i < numCities; i++) {
        scanf("%d", &cityPopulation);
        if (cityPopulation > 10000) {
            count++;
        }
    }

    // Display the count
    printf("%d\n", count);

    return 0;
}




/*You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).

Example
Input
6
1000
5000
15000
4780
0
23590
Output
2
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/
