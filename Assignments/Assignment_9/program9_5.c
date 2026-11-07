/*Writea program which returns difference between odd factorial and even factorial of given number/*
Input: 5
Output: 7   (8 -15)
Input: -5
Output: -7   (8 -15)*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo ; iCnt >=2; iCnt = iCnt - 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    if(iNo % 2 ==0)
    {
        iNo = iNo -1;
    }

    for(iCnt = iNo ; iCnt >=1; iCnt = iCnt - 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    iDiff = iEvenFact - iOddFact;

   return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("fACTORIAL diff is %d",iRet);

    return 0;
}