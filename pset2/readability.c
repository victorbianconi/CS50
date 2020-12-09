#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>


int main()
{
    string txt = get_string("Text: ");

    float lCount = 0;
    float sCount = 0;
    float wCount = 0;
    
    if (txt[0]) //if there's a char in txt, set the word counter to 1.
    {
     wCount = 1;
    }
    for (int i = 0; txt[i] != 0; i++)
    {  
        // letters count
       if ((txt[i] > 64 && txt[i] < 91) || (txt[i] > 96 && txt[i] < 123)) 
        {
            lCount++;
        }
        // words count
        if (txt[i] == 32) 
        {
            wCount++;
        }
        // sentences count
        if (txt[i] == 46 || txt[i] == 63 || txt[i] == 33) 
        {
           sCount++;
        }
    }
    float L = (lCount / wCount) * 100;
    float S = (sCount / wCount) * 100;
    
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int finIndex = round(index);
    
    if (index > 16) 
    {
        printf("Grade 16+\n"); 
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n"); 
    }
    else 
    {
        printf("Grade %i\n", finIndex); 
    }
    
    return 0;
}
