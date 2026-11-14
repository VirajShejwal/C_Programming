/*Write a program which accept string from user and accept one character.return index of last occurence of that character
Input: "Marvellous Multi OS"
        M
Output : 11
Input: "Marvellous Multi OS"
        W
Output : -1 */


#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;
        }

        iCount++;
        str++;
    }

    return iIndex;
}

int main()
{
    char Arr[20];
    char cValue ;
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^'\n']s", Arr);

    printf("Enter character : ");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Last occurrence index is : %d\n", iRet);

    return 0;
}
