#include <stdio.h>

int main() {
    char ch;
    printf("");
    scanf("%c", &ch);

  

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            printf("+");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c", ch);
        }
        for (int j = 0; j < 5 - i - 1; j++) {
            printf("+");
        }
        printf("\n");
    }

    return 0;
}



/*
Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
#########
Input
o
Output
++++o++++
+++ooo+++
++ooooo++
+ooooooo+
ooooooooo
*/
