/*Accept character from user and check wheter it is small case or not
(0-9 )
Input : g
Output: TRUE
Input: D
Output : FALSE*/


#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Case Character");
    }
    else
    {
        printf("It is not a Small Case Character");
    }

    return 0;
}
