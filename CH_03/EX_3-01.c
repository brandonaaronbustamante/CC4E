/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 3-1. You should write a function called expand(s, t) 
*   that copies the string s to t expanding newlines and tabs to '\n' 
*   and '\t' respectively. Use a switch statement (it will be a short 
*   switch statement). You can assume that the t variable contains 
*   enough space. Make sure to properly terminate t with the 
*   end-of-string marker '\0'.
*   Expected Output
*   Hello world
*   Hello world\n
*   Hello\tworld\n
*   Hello\tworld\nHave a nice\tday\n
**********************************************************************/
// Provided Code
#include <stdio.h>
int main() {
  char t[1000];
  void expand();
  expand("Hello world", t);
  printf("%s\n", t);
  expand("Hello world\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\n", t);
  printf("%s\n", t);
  expand("Hello\tworld\nHave a nice\tday\n", t);
  printf("%s\n", t);
}
// End of Provided Code

// My Code
void expand(char s[], char t[])
{
  int i, j;
  
  for (i = 0, j = 0; s[i] != '\0'; i++)
  {
    // Check if the current char is a new line or tab
    // If so, insert the corresponding escape sequence (\n or \t)
    // Otherwise add the current char to 'new string' t
    switch (s[i])
    {
      // Use post increment to move to next index after assignment
      case '\n':
      t[j++] = '\\';
      t[j++] = 'n';
      break;
      case '\t':
      t[j++] = '\\';
      t[j++] = 't';
      break;
      default:
      t[j++] = s[i];
    }
  }
  // Terminate the final output string with the null character
  t[j] = '\0';
}