#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>



int main(void)
{
    string text = get_string("Enter your text: ");

    int letters = 0;
    for (int i = 0, len = strlen(text); len > i; i++)
    {
        char c = text[i];
        if(isalpha(c))
        {
            letters++ ;
        }
    }

    int words = 1;
    for (int i = 0, len = strlen(text); len > i; i++)
    {
        char c  = text[i];
        if(isspace(c))
        {
            words++;
        }
    }

    int sentences = 0;
    for (int i = 0, len = strlen(text); len > i; i++)
    {
        char c = text[i];
        if(ispunct(c))
        {
            sentences++;
        }
    }



    float L = (letters / (float) words) * 100;
    float S = (sentences / (float) words) * 100;

 int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Sonucu yazdır
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}




