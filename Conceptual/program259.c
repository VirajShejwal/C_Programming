// accept string from user and get digit

#include<stdio.h>
#include<stdlib.h>

int CountDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9' )
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}
int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountDigitsX(Arr);

    printf("frequency of digits is : %d\n",iRet);

    return EXIT_SUCCESS;
}