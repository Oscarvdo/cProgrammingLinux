#include <stdio.h>
#include <string.h>

int main() {
    char word[51]; // Assuming words will not exceed 50 characters
    int length, halfLength;

    // Read the word
    scanf("%s", word);

    // Calculate the length of the word
    length = strlen(word);
    halfLength = length / 2;

    int foundInFirstHalf = 0;
    int foundInSecondHalf = 0;

    // Check the first half for 't' or 'T'
    for (int i = 0; i <= halfLength; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            foundInFirstHalf = 1;
            break;
        }
    }

    // Check the second half for 't' or 'T'
    for (int i = halfLength + 1; i < length; i++) {
        if (word[i] == 't' || word[i] == 'T') {
            foundInSecondHalf = 1;
            break;
        }
    }

    // Determine the output based on the checks and match the expected format
    if (foundInFirstHalf) {
        printf("1\n");
    } else if (foundInSecondHalf) {
        printf("2\n");
    } else {
        printf("-1\n");
    }

    return 0;
}



/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

 

Examples
Input:
apple
Output:
-1
 

Input:
raincoat
Output:
2
 

Input:
enter
Output:
1
 

Input:
Taylor
Output:
1
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
  */
