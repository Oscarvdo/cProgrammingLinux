#include <stdio.h>

int main() {
    int numGrades;
    scanf("%d", &numGrades);  // Read the number of grades

    int sum = 0;
    for (int i = 0; i < numGrades; ++i) {
        int grade;
        scanf("%d", &grade);  // Read each grade
        sum += grade;  // Add the grade to the sum
    }

    double average = (double)sum / numGrades;  // Calculate the average

    // Print the average with two decimal places
    printf("%.2lf\n", average);

    return 0;
}




/*
You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two decimal places.

Example
Input:
4
10
8
16
9
Output:
10.75
  */
