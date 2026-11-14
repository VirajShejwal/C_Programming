/*Write a program which accept string from user and accept one character.return index of first occurence of that character
Input: "Marvellous Multi OS"
        M
Output : 0
Input: "Marvellous Multi OS"
        W
Output : -1  */


#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }

        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue ;
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^'\n']s", arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Index is : %d", iRet);

    return 0;
}
