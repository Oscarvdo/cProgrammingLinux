#include <stdio.h>

int main() {
    int currentPopulation;
    double growthRate;

    scanf("%d", &currentPopulation);  // Read current population
    scanf("%lf", &growthRate);  // Read growth rate

    // Calculate the expected population in a year
    int expectedPopulation = currentPopulation + (int)(currentPopulation * (growthRate / 100));

    printf("%d\n", expectedPopulation);  // Display expected population

    return 0;
}


/*
he population of a city has risen sharply over the past few years, thanks to a high birth rate. However, this poses a number of problems, including a housing shortage. The mayor has decided to deal with the problem and would like to estimate the future growth of the population, and he has called you in to help!

Please write a C-program that first reads an integer representing the current population of the city, and that next reads a decimal number for the projected population growth as a percentage (either positive or negative). The program should then display the expected population of the city in a year as a whole number. By convention we will only consider "whole" people. So a population of 31.8 inhabitants will be considered as having 31 inhabitants. 

Example
Input:
123
7.0
Output:
131
  */
