#include <stdio.h>

int main() {
    int ingredients[10]; // Declare an array to store ingredient quantities

    // Read 10 integers (ingredient quantities) into the array
    for (int i = 0; i < 10; i++) {
        scanf("%d", &ingredients[i]);
    }

    int ingredientID; // Declare a variable to store the ingredient ID
    scanf("%d", &ingredientID); // Read the ingredient ID

    // Check if the ingredient ID is valid (between 0 and 9)
    if (ingredientID >= 0 && ingredientID < 10) {
        // Output the corresponding quantity for the given ingredient ID
        printf("%d\n", ingredients[ingredientID]);
    } else {
        // Invalid ingredient ID
        printf("Invalid ingredient ID\n");
    }

    return 0;
}

/*
Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.

Example
Input:
500 180 650 25 666 42 421 1 370 211
3
Output:
25
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.

Note
You may submit your solution as many times as you wish. Only your highest score will be kept.
*/
