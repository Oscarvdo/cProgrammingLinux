#include <stdio.h>
#include <string.h>

int main() {
    int numWords;
    int maxLength = 0;

    // Read the number of words
    scanf("%d", &numWords);

    // Loop to read each word and find the longest word
    for (int i = 0; i < numWords; i++) {
        char word[101]; // Assuming words will not exceed 100 characters

        // Read the word
        scanf("%s", word);

        // Calculate the length of the current word
        int length = strlen(word);

        // Update the maxLength if the current word is longer
        if (length > maxLength) {
            maxLength = length;
        }
    }

    printf("%d\n", maxLength);

    return 0;
}

/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.

 

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7
Input:
7
All cats are grey in the dark
Output:
4
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
  */
