/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-5. Modify the temperature conversion program to 
*   print the table in reverse order, that is, from 300 degrees to 0.
*   Expected Output
*   300  148.9
*    280  137.8
*    260  126.7
*    240  115.6
*    220  104.4
*    200   93.3
*    180   82.2
*    160   71.1
*    140   60.0
*    120   48.9
*    100   37.8
*     80   26.7
*     60   15.6
*     40    4.4
*     20   -6.7
*      0  -17.8
**********************************************************************/
#include <stdio.h>

int main() /* Fahrenheit-Celsius table */
{
    int fahr;
    // Changed for loop
    // Started at 300 instead of staring at 0
    // Changed loop condition from fahr <=300 to fahr >= 0
    // Switched from incrementing to decrementing using fahr -= 20
    for (fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}