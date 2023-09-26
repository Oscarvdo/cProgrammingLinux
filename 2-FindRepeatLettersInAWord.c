#include <stdio.h>
#include <string.h>

int main() {
    char word[51]; // Assuming words will not exceed 50 characters
    int letterCount[26] = {0}; // Initialize an array to count occurrences of each letter (a to z)

    // Read the word
    scanf("%s", word);

    int length = strlen(word);
    int count = 0;

    // Sort the letters alphabetically (using bubble sort)
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (word[j] > word[j + 1]) {
                // Swap the letters
                char temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    // Count letters that occur multiple times
    for (int i = 0; i < length; i++) {
        if (i < length - 1 && word[i] == word[i + 1]) {
            letterCount[word[i] - 'a']++; // Increment count for the letter
            while (i < length - 1 && word[i] == word[i + 1]) {
                i++; // Skip ahead to avoid counting the same letter again
            }
        }
    }

    // Calculate the total count of letters that occur multiple times
    for (int i = 0; i < 26; i++) {
        count += letterCount[i];
    }

    printf("%d\n", count);

    return 0;
}


/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

 

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
 

Input:
taylor
Output:
0
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.


  */
