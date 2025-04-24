/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-7. Write a program to copy its input to its output,
*   replacing each string of one or more blanks by a single blank.
*   Input
*   But soft  what light     through yonder window breaks
*   It is    the east and  Juliet is the sun
*   Arise fair sun   and kill the envious moon
*   Who  is  already  sick  and  pale  with  grief
*   Expected Output
*   But soft what light through yonder window breaks
*   It is the east and Juliet is the sun
*   Arise fair sun and kill the envious moon
*   Who is already sick and pale with grief
**********************************************************************/
#include <stdio.h>
#define YES 1
#define NO 0

int main()
{
    int c;
    int putSpace = NO; // flag to track if a space has been placed

    while ((c = getchar()) != EOF) {
        // if the current char is not a space,
        // print current char and reset the flag
        if (c != ' ')
        {
            putchar(c);
            putSpace = NO;

        }
        // if the current char is a space,
        // and a space has not been printed
        // print a space and set the flag
        else
        {
            if (putSpace == NO)
            {
                putchar(' ');
                putSpace = YES;
            }
        }

    } 
}
