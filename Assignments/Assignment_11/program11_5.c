/*Write a program which accept range from user and return addition of all numbers in between that range in reverse order
INPUT :23 30
OUTput : 30 29 28 27 26 25 24 23*/

#include<stdio.h>

int RangeDisplay(int iStart , int iEnd)
{
    int iCnt = 0;
    
    for(iCnt = iEnd;iCnt >= iStart; iCnt--)
    {
    printf("%d ",iCnt);        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet =0;
    

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1, iValue2);

    printf("Reverse order is : %d",iRet);
    
    return 0;
}