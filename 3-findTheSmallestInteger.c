#include <stdio.h>

// Function prototype
int min(int a, int b);

int main() {
    int numElements;
    scanf("%d", &numElements);

    int smallest = 0;
    int value;

    if (numElements > 0) {
        scanf("%d", &smallest);  // Initialize 'smallest' with the first value
        numElements--;

        while (numElements > 0) {
            scanf("%d", &value);
            smallest = min(smallest, value);
            numElements--;
        }

        printf("%d\n", smallest);
    }

    return 0;
}

// Function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}



/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
  */
