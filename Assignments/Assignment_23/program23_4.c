/*write a program which accepts string from user and display only digit from string

Input : "marvellous89121"
Output  : 89121*/



#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf(" %49[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}
