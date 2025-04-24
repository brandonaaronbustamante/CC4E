/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-6. Count blanks and new lines. We skip tabs because
*   it is a little tricky.
*   Provided Input
*   But soft what light through yonder window breaks
*   It is the east and Juliet is the sun
*   Arise fair sun and kill the envious moon
*   Who is already sick and pale with grief
*   Expected Output
*   29 4
**********************************************************************/
#include <stdio.h>

int main() /* count new lines in input */
{
    // Created new variable for blank space
    int c, nl, blankCount;
    nl = 0;
    // Initialize blankCount to 0
    blankCount = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        {
            ++nl;
        }
        // Check if the curent char is a space, increment if so
        else if (c == ' ')
        {
            blankCount++;
        }
    printf("%d %d\n", blankCount, nl);
}