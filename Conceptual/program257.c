// Accept alphabet from user and get frequency of a to z          ascii 97 -a , 122-z

#include<stdio.h>
#include<stdlib.h>

int CountSmallX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z' )
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

    iRet = CountSmallX(Arr);

    printf("frequency of small leters is : %d\n",iRet);

    return EXIT_SUCCESS;
}