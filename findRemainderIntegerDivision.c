#include <stdio.h>

int main() {
    int totalMatches, boxSize, fullBoxes, leftoverMatches;

    // Ask the user for the number of matches and the size of each box
    printf("Enter the number of matches: ");
    scanf("%d", &totalMatches);

    printf("Enter the size of each box: ");
    scanf("%d", &boxSize);

    // Calculate the number of full boxes and leftover matches
    fullBoxes = totalMatches / boxSize;
    leftoverMatches = totalMatches % boxSize;

    // Print the results
    printf("Number of full boxes: %d\n", fullBoxes);
    printf("Number of leftover matches: %d\n", leftoverMatches);

    return 0;
}



/*
You have a number of loose matches that you would like to put back into boxes. Write a program that calculates and displays how many full boxes you will have and how many leftover matches you will have after filling all the boxes you can. Your program should take as input the number of matches to be boxed up followed by the size of a each box. Next it should print out the number of full boxes followed by the number of remaining matches.

Example
Input:
666
13
Output: 
51
3
  */
