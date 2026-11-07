/*write a program to find factorial of given number/*
Input: 5
Output: 120   (5 * 4 * 3 * 2 * 1)*/

#include<stdio.h>
int Factorial(int iNo)
{
    int iFact=1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int i=iNo; i>=1; i--)
    {
        iFact = iFact * i;
    }

    return iFact;
}


int main()
{
    int iValue = 0,iRet =0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet= Factorial(iValue);
    printf("factorial of number is %d",iRet);
    
    return 0;
}