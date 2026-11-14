/*Accept character from user and display its ASCII value in decimal, octal and hexadecimal formal
Input: A
output : Decimal        65
         OCTAL          0101
         hexadecimal    0X41 */


#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal       %d\n", ch);
    printf("Octal         0%o\n", ch);
    printf("Hexadecimal   0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    DisplayASCII(cValue);

    return 0;
}
