
#include <stdio.h>

int main() {
    int expense;
    int total = 0;

    while (1) {
        scanf("%d", &expense);

        if (expense == -1) {
            break; // Exit the loop when -1 is encountered
        }

        if (expense < 0) {
            // Ignore negative values
            continue;
        }

        total += expense;
    }

    printf("%d\n", total);

    return 0;
}


/*Much of the work of a university administration (in addition to managing teachers, researchers, students, courses, etc.) is to ensure the proper functioning of the university and in particular that the accounting job is well done. Once a year, an annual report of expenditures must be made.

All expenses for the year have been recorded and classified in a multitude of files and the sum of all these expenses must now be calculated. But no one knows exactly how many different expenses have been made in the past year!

Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).

Example 1
Input
1000
2000
500
-1
Output
3500
Example 2
Input
-1
Output
0
Example 3
Input
150
250
350
4500
240
120
-1
Output
5610
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
