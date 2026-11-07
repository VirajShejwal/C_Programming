/*Writea program to find odd factorial of given number/*
Input: 5
Output: 15   (5*3*1)
Input: -5
Output: 15   (5*3*1)*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo %  2 ==00)
    {
        iNo = iNo -1;
    }
    for(; iNo >= 1; iNo = iNo - 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0;
}