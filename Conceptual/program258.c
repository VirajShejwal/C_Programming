// Accept capital alphabet from user and get frequency of a to z          ascii 97 -a , 122-z

#include<stdio.h>
#include<stdlib.h>

int CountCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z' )
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

    iRet = CountCapitalX(Arr);

    printf("frequency of capital leters is : %d\n",iRet);

    return EXIT_SUCCESS;
}