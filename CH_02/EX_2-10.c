/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 2-10. You should write a function (no #include 
*   statements are needed) called lower(c) that converts its input 
*   parameter to lower case. If the letter is not an upper case ASCII 
*   letter - just return the parameter unchanged. You should not use 
*   ctype.h and your code can assume the ASCII character set. You 
*   should use the question mark (?) operator and not an if-then-else 
*   construct.
*   Expected Output
*   Lower M is m
*   Lower x is x
*   Lower @ is @
*   Lower u is u
**********************************************************************/
// Provided Code
#include <stdio.h>
int main() 
{
  int lower();
  printf("Lower M is %c\n", lower('M'));
  printf("Lower x is %c\n", lower('x'));
  printf("Lower @ is %c\n", lower('@'));
  printf("Lower u is %c\n", lower('u'));
}
// End of Provided Code


// My Code
/* convert c to lower case; ASCII only */
int lower(int c) 
{
  // Made use of the Ternary conditional expression to replace
  // traditional if-else statements
  // if (c >= 'A' && c <= 'Z')
  //  return(c + 'a' - 'A');
  // else
  //  return(c);
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}