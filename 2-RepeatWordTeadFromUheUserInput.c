#include <stdio.h>
#include <string.h>

int main() {
    int repetitions;
    char word[101]; // Reserve space for a word with up to 100 characters

    // Read the number of repetitions and the word
    scanf("%d %s", &repetitions, word);

    // Loop to print the word the specified number of times
    for (int i = 0; i < repetitions; i++) {
        printf("%s\n", word);
    }

    return 0;
}


/*
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).

 

Examples
Input:
2 Hello
Output:
Hello
Hello
 

Input:
4 thing
Output:
thing
thing
thing
thing
*/
