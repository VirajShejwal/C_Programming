/*Write a program which accept string from user and accept one character.chck whether that character is present in string or not
Input: "Marvellous Multi OS"
        e
Output : TRUE
Input: "Marvellous Multi OS"
        W
Output : FALSE       */



#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf(" %[^'\n']s", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    bRet = CheckChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}
