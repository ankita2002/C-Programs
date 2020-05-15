#include <stdio.h>
#include <string.h>

int main()
{
   char text[100];
   int begin, middle, end, length = 0;
   printf("Enter the string to check if it is a palindrome or not :\n");
   gets(text);
 
   while (text[length] != '\0')
   {
      length++;
   }
   end = length - 1;
   middle = length/2;
 
   for (begin = 0; begin < middle; begin++)
   {
      if (text[begin] != text[end])
      {
         printf("Entered String is not a palindrome string.\n");
         break;
      }
      end--;
   }
   if (begin == middle)
      printf("Entered String is a palindrome string.\n");
 
  return 0;
}

