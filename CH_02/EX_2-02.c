/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 2-2. You should write a function (no #include 
*   statements are needed) called htoi(str) that converts hexadecimal 
*   constant (base-16 0-9 and a-f) to an integer. There will not be a
*   '0x' prefix (like in C) - just assume the input is a hex number. 
*   You should not use ctype.h and your code can assume the ASCII 
*   character set. Each time you run the program, the values you need 
*   to convert 9e83e (base-16) to 649278 (base-10) may be different 
*   each time you run the code.
*   Expected Output
*   htoi('F0') = 240
*   htoi('f') = 15
*   htoi('c593e') = 809278
*   htoi('12fab') = 77739
**********************************************************************/
// Provided Code
#include <stdio.h>
int main() {
  int htoi();
  printf("htoi('9e83e') = %d\n", htoi("9e83e"));
  printf("htoi('f') = %d\n", htoi("f"));
  printf("htoi('F0') = %d\n", htoi("F0"));
  printf("htoi('12fab') = %d\n", htoi("12fab"));
}

int atoi(s) /* convert s to integer */
char s[];
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return(n);
}
// End of Provided Code

// My Code  
#define MULTIPLIER 16

// Function to convert hex "string" to int
int htoi(char s[])
{
    int i, number;
    number = 0;

    // loop through each char until the null terminator '\0'
    for (i = 0; s[i] != '\0'; i++)
    {
        // if the char is a digit between 0 and 9
        if (s[i] >= '0' && s[i] <= '9')
        {
            // convert to int value then add to running total
            // ie: number
            number = (number * MULTIPLIER) + s[i] - '0';
        }
        // if the char is an upper case hex letter, A - F
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            // convert to int value then add to running total
            // ie: number
            number = (number * MULTIPLIER) + (s[i] - 'A' + 10);
        }
        // if the char is lower case hex letter, a - f
        else if (s[i] >= 'a' && s[i] <= 'f')
        {
            // convert to int value then add to running total
            // ie: number
            number = (number * MULTIPLIER) + (s[i] - 'a' + 10);
        }
        // ignore any other chars
        else
        {
            ;// do nothing
        }
    }

    return number;
}