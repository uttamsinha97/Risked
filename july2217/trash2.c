#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char ch, input[100], output[100];
   int no[26] = {0}, n, c, t, x;

   printf("Enter some text\n");
   scanf("%s", input);

   n = strlen(input);

   /** Store how many times characters (a to z)
      appears in input string in array */

   for (c = 0; c < n; c++)
   {
      ch = input[c] - 'a';
      no[ch]++;
   }

   t = 0;

   /** Insert characters a to z in output string
       that many number of times as they appear
       in input string */

   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';

      for (c = 0; c < no[x]; c++)
      {
         output[t] = ch;
         t++;
      }
   }
   output[t] = '\0';

   printf("%s\n", output);

   return 0;
}
