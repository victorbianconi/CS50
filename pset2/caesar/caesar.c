#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
  if (argc == 2)
   {
     for(int i = 0; argv[1][i] != 0; i++)
     {
         if( argv[1][i] < 48 || argv[1][i] > 57)
         {
                  printf("Usage: ./caesar key\n");
                  return 1;
         }
     }
     
      int key = atoi(argv[1]);

      string p = get_string("plaintext: ");
   
      printf("ciphertext: ");

      for(int i = 0, n = strlen(p); i < n; i++)
      { 
             if islower(p[i])
              {
                   printf("%c", (((p[i] + key) - 97) % 26) + 97);
              }
             else if isupper(p[i]) 
              {
                   printf("%c", (((p[i] + key) - 65) % 26) + 65);   
              }
             else
              {
                   printf("%c", p[i]);
              }
      }
      
      printf("\n");
      return 0;

   } else 
   {
      printf("Usage: ./caesar key\n");
      return 1;
   }
}
