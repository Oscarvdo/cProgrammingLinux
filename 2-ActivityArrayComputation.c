#include <stdio.h>

int main() {
    int numIngredients;
    double prices[10], weights[10], totalCost = 0.0;

    // Read the number of ingredients
    scanf("%d", &numIngredients);

    // Read the prices per pound of each ingredient
    for (int i = 0; i < numIngredients; i++) {
        scanf("%lf", &prices[i]);
    }

    // Read the weight necessary for each ingredient
    for (int i = 0; i < numIngredients; i++) {
        scanf("%lf", &weights[i]);
    }

    // Calculate the total cost
    for (int i = 0; i < numIngredients; i++) {
        totalCost += prices[i] * weights[i];
    }

    // Display the total cost with 6 decimal places
    printf("%.6lf\n", totalCost);

    return 0;
}




/*You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.

 

Example
There are 4 ingredients and they all have a different price per pound: 9.90, 5.50, 12.0, and 15.0. You must take 0.25 lbs of the first, 1.5 lbs of the second, 0.3 lbs of the third and 1 lb of the fourth. It will cost exactly $29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0
Output:
29.325000
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/
