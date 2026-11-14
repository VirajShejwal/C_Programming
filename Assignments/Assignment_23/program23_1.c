/*write a program which accepts string from user and convert it into lower case

Input : "Marvellous multi OS"
Output  :  marvellous multi os*/


#include<stdio.h>

void striwrx(char *str)
{
    while(*str != '\0')
    {
        *str = small(*str);
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
