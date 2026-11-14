/*write a program which accepts string from user and count number of wgite spaces

Input : "MarvellouS"
Output  : 0
Input : "MarvellouS InfoSystem"
Output  : 1
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %49[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d", iRet);

    return 0;
}
