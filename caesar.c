#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //GRAB & VALIDATE THE KEY

    //count command-line arguments
    int cipher;
    if ( argc == 2 )
    {
        int sl = strlen(argv[1]);

        for(int i = 0; i < sl; i++)
        {
            if (isalpha(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }

            //IF cla a positive decimal digit, populate cipher
            if (atoi(argv[1]) >= 0)
            {
            cipher = atoi(argv[1]);
            printf("cipher k value = %i\n", cipher);
            }

            //ELSE print "Usage: ./ceasar key" and return 1
            else
            {
                printf("Usage: ./ceasar key");
            }

        }

    }

    //if cla has no args, or more than one, print error message and return 1
    else
    {
        printf("CRAZY ERROR TIME\n");
        return 1;
    }

    //populate plaintext variable as string

    string plaintext = get_string("Enter your plain text here: ");
    printf("plaintext: %s\n", plaintext);

    //ENCRYPTION
    int ptsl = strlen(plaintext);
    string ciphertext = plaintext;
    for (int i = 0; i < ptsl; i++)
    {
        //is it not alphabetical?  Then ignore.

        if (isalpha(ciphertext[i]))
        {

            //Is it upper?  then convert and toUpper.
            if(isupper(ciphertext[i]))
            {
                ciphertext[i] = toupper(ciphertext[i] + cipher);
            }

            //Is it lower? then convert and toLower.
            if(islower(ciphertext[i]))
            {
                ciphertext[i] = tolower(ciphertext[i] + cipher);
            }

        }

    }

    //OUTPUT
    printf("ciphertext: %s\n", ciphertext);
    return 0;

}