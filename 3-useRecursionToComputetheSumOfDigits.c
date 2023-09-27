#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: When the number becomes 0, return 0.
    } else {
        return (n % 10) + sumOfDigits(n / 10); // Add the last digit and recursively sum the rest.
    }
}

int main() {
    int number;
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("%d\n", result);

    return 0;
}



/*
Please write a C-program that uses a recursive function called "sumOfDigits()" to compute the sum of the digits of a number. To do so, your main function should first read an integer number as input and then call sumOfDigits(), which should in turn call itself until there are no digits left to sum, at which point the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6

Examples
Input
47253
Output
21
 

Input
643
Output
13
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/
