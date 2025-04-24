/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-10. Write a program which prints the words in its 
*   input, one per line. A word is any string separated by a space or 
*   newline.
*   Input
*   But soft what light
*   through yonder window
*   breaks
*   Expected Output
*   But
*   soft
*   what
*   light
*   through
*   yonder
*   window
*   breaks
**********************************************************************/
#include <stdio.h>

int main() 
{
    int c;
    while ((c = getchar()) != EOF) {
        // Print the character if it is not a space or newline
        if(c != ' ' && c != '\n')
        {
            putchar(c);
        }
        // Otherwise, print a newline to separate words
        else
        {
            putchar('\n');
        }
    }
}