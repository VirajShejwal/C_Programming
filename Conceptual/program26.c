#include<stdio.h>
#include<stdlib.h>


int main()
{
    char sName[30];

    printf("Enter your name :\n");

    scanf("%29[^'\n']s",sName);              //special string in []bracket


    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}