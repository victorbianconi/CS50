#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

     string key = argv[1]; // takes the second command-line argument (the key).
     int count = 0; // counter for duplicate characters during the checking.

     if (argc != 2) // if there are more than 2 command-line arguments (including ./substitution)
     {
         printf("Error. Insert 1 argument.\n");
         return 1;
     }


     if (strlen(key) != 26) // if the length of the key is not 26
     {
         printf("Insert 26 characters.\n");
         return 1;
     }


     for (int i = 0; i < strlen(key); i++) // check if every character is alphabetical
       {
        if(!isalpha(key[i]))
        {
             printf("Characters must be alphabetical.\n");
             return 1;
         }
            
     for (int j = 0; j < strlen(key); j++)
     {
      
        if (key[i] == key[j])
        {
               count++;
        }
     }
        
      if (count > 26) // check for duplicate characters
      {
           printf("No duplicates allowed.\n");
           return 1;
      }
  }

     string alphaUpper = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
     string alphaLower = {"abcdefghijklmnopqrstuvwxyz"};
     string plain = get_string("plaintext: ");

     printf("ciphertext: ");

     for (int i = 0; i < strlen(plain); i++)
     {
       if (isupper(plain[i]))
       {
           for (int j = 0; j < strlen(key); j++)
           {
               if (plain[i]==alphaUpper[j]) // if the character is equal to the character in the alphabet
               {
                     printf("%c", toupper(key[j])); // then keep the index (j) and print the character of the key on that index.
               } 
           }
       }
       
       else if (islower(plain[i]))
       {
          for (int j = 0; j < strlen(key); j++)
          {
              if (plain[i] == alphaLower[j]) // as above ^ (but for lower case chars)
              {
                    printf("%c", tolower(key[j])); // as above ^ (but for lower case chars)
              }
          }
       }
       else 
       {
              printf("%c", plain[i]); // if the character is not alphabetical then print the same character of the plain text.
       }

}
       printf("\n");
       
}


