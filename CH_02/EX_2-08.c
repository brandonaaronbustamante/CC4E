/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   LBS290 Exercise 8. This program will prompt for 5 floating point 
*   numbers. The program will print out the total of the five numbers 
*   and also print out the average.
*   Expected Output
*   The total is: 60.0
*   The average is: 12.0
**********************************************************************/
#include "stdio.h"
#define INPUTSIZE 5
#define DIVISOR 5.0


int main () 
{
    int i;
    float avg = 0, number = 0, sum = 0;

    for (i = 0; i < INPUTSIZE; i++)
    {   
        scanf("%f", &number);
        sum += number;
    }

    avg = sum / DIVISOR;

    printf("The total is: %.1f\n", sum);
    printf("The average is: %.1f\n", avg);
}