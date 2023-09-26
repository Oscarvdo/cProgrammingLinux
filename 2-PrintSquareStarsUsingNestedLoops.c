#include <stdio.h>

int main() {
    int n;

    // Ask the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Check if n is greater than 0
    if (n <= 0) {
        printf("The number must be greater than 0.\n");
        return 1; // Exit the program with an error code
    }

    // Iterate to print the square of stars
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n"); // Line break to move to the next row
    }

    return 0;
}






/*
Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

Examples
Input:
5
Output:
*****
*****
*****
*****
*****
 
Input:
3
Output:
***
***
***

  */
