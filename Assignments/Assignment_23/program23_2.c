/*write a program which accepts string from user and convert it into upper case

Input : "Marvellous multi OS"
Output  :  MARVELLOUS MULTI OS*/


#include<stdio.h>

void struprx(char *str)
{
   while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%[^'\n]s",arr);

    striwrx(arr);

    printf("Modified string is %s", arr);

    return 0;
}
