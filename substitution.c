#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    char ALPHA[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    if(argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }

    string text = argv[1];
    int length_key = 0;
    int seen[26] = {0};
    int unique = 0;

     for (int l = 0, lenl = strlen(text); lenl > l; l++)
     {
        if(isalpha(text[l]))
        {
            char lower = tolower(text[l]);
            int index = lower - 'a';
            if(seen[index] == 0)
            {
                seen[index] = 1;
                unique++;
            }
        }
      }
    for (int i = 0, leni = strlen(text); leni > i; i++)
    {
        if(!isalpha(text[i]))
        {
            printf("Key must contain alphabetic characters.\n");
            return 1;
        }
        if(isalpha(text[i]))
        {
            length_key++ ;
        }
    }

        if(length_key != 26)
        {
        printf("Key must contain 26 characters.\n");
        return 1;
        }

     string plain_text = get_string("Plaintext: ");
     printf("ciphertext: ");

    for (int x = 0, len = strlen(plain_text); len > x; x++)
    {
        char c = plain_text[x];
            if(isalpha(c))
            {
                int index = toupper(c) - 'A';
                char cipher = text[index];

                if(isupper(c))
                {
                printf("%c", toupper(cipher));
                }
                else
                {
                    printf("%c", tolower(cipher));
                }
            }
            else
            {
            printf("%c", c);
            }
    }
    printf("\n");
}
