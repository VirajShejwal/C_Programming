//Accept a single character and determine whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. Use library character-classification functions.

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    if (isupper((unsigned char)cValue))
    {
        printf("Uppercase Alphabet\n");
    }
    else if (islower((unsigned char)cValue))
    {
        printf("Lowercase Alphabet\n");
    }
    else if (isdigit((unsigned char)cValue))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
