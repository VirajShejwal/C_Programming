/*Write a program which accept string from user and count number of small characters
Input : "Marvellous "
Output : 9*/


#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter String : ");
    scanf(" %49[^\n]", arr);

    iRet = CountSmall(arr);

    printf("Number of small characters are : %d\n", iRet);

    return 0;
}
