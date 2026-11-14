/*Write a program which accept string from user and display it in reverse order
Input : "MarvellouS"
output: "SoullevraM"
*/


#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
    int iCnt = 0;

    iCnt = strlen(str) - 1;

    while(iCnt >= 0)
    {
        printf("%c", str[iCnt]);
        iCnt--;
    }
}

int main()
{
    char arr[50];

    printf("Enter String : ");
    scanf(" %49[^\n]", arr);

    printf("Reverse string is : ");
    Reverse(arr);

    return 0;
}
