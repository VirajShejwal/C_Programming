//accept string from user and get captial small letters and digits and also special case

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit =0, iCountSpecial =0 ;

    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }

        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str>= '0' && *str <= '9')                                      
        {
            iCountDigit++;
        }
        else
        {
            iCountSpecial++;
        }

        str++;
    }

    printf("No of capital letters : %d\n",iCountCapital);
    printf("No of small letters : %d\n",iCountSmall);
    printf("No of digit : %d\n",iCountDigit);
    printf("No of special symbols: %d\n",iCountSpecial);
    
}
int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    CountFrequencyX(Arr);


    return EXIT_SUCCESS;
}