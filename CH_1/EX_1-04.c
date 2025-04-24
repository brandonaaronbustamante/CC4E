/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-4. Write a program to print the corresponding
*   Celsius to Fahrenheit table. Check the sample output for the
*   required format of the heading.
*   Expected Output
*   0   32.0
*     20   68.0
*     40  104.0
*     60  140.0
*     80  176.0
*    100  212.0
**********************************************************************/

#include <stdio.h>

int main() /* Fix this to be Celsius-Fahrenheit table */
{
    int cel;
    for (cel = 0; cel <= 100; cel = cel + 20)// Changed 40 to 20
        printf("%4d %6.1f\n", cel, ((9.0/5.0)* cel) + 32);
        // Fixed formula, the 9.0/5.0 was missing and added () for 
        // the correct order of operations
}