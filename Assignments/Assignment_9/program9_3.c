/*Writea program to find even factorial of given number/*
Input: 5
Output: 8   (4*2)
Input: -5
Output: 8   (4*2)*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(; iNo >= 2; iNo = iNo - 2)
    {
        iFact = iFact * iNo;
    }
   return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0;
}