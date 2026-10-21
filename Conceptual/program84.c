//Diviaible by 5 or not

#include<stdio.h>
#include<stdlib.h>


void CheckDivisible(int iNo)
{
    if((iNo % 5)== 0)
    {
        printf("It is divisible \n");
    }
    else
    {
        printf("It is not divisible \n");
    }
}

int main()
{
    int iValue= 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}