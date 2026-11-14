/*Accept character from user .if it is capital then display all the characters from the input character till Z. if input character is small
then print all the character in reverse order till a. in other cases
return directly

Input : Q
Output: Q   R   S   T   U   V   W   X   Y   Z

input : m
output: m    l   k   j   i   h   g   f   e   d   c   b   a

input:8 
output: */


#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}
