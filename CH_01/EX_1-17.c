/**********************************************************************
*   Author 
*   Brandon A Bustamante
*   License
*   MIT (see LICENSE file)
*   Problem
*   K&R Exercise 1-17. You should write a function called reverse(s) 
*   that reverses the characters in a string. Reverse the string in 
*   place.
*   Expected Output
*   Hello world
*   dlrow olleH
*   YX
*   nevE
*   ddO
*   civic
**********************************************************************/

// Provided code
#include <stdio.h>
#include <string.h>

int main()
{
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}
// End of provided code


// My code is below
// Converted to modern C style for readability
// Original
// void reverse(t)
// char t[];
void reverse(char t[])
{
  int i;
  int numOfChars = strlen(t);
  int lastChar;
  char temp;

  for (i = 0; i < numOfChars / 2; i++)
  {
    // Finding the last character in the char array
    lastChar = numOfChars -1 - i;
    // Swapping the characters in ther array
    temp = t[i];
    t[i] = t[lastChar];
    t[lastChar] = temp;
  }
}