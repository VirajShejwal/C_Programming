/*write a program which accept name from user and prim=nt that name
Input: viraj shejwal
output : viraj shejwal*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%[^\n]", Name);

    printf("Your name is %s\n", Name);

    return 0;
}
