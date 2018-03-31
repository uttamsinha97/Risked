#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "uttamkumar.sinha");
   printf("String = %s,\n\nAddress = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, "95gmail.com");
   printf("\n\nString = %s,\n\nAddress = %u\n", str, str);

   free(str);

   return(0);
}

