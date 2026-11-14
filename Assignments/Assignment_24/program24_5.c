/*Write a program which accept string from user and reverse that string in place
Input: "abcd"
Output : "dcba"
Input: "abba"
Output : "abba" */


#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    int iStart = 0;
    int iEnd = strlen(str) - 1;
    char temp = '\0';

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter string : ");
    scanf(" %[^'\n']s", Arr);

    StrRevX(Arr);

    printf("Reversed string is : %s\n", Arr);

    return 0;
}
