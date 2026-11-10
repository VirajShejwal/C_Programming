/*Write a program which accept range from user and return addition of all numbers in between that range
INPUT :23 30
OUTput : 212*/

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
    int iCnt = 0;
    int iSum =0;
    for(iCnt = iStart;iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);
    printf("Addition of number is : %d",iRet);

    return 0;
}