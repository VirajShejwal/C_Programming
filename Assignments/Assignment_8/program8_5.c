/*write a program which accept number from user and diplay its tablein reverse/*
Input: 2
Output: 20  18  16  14  12  10  8   6   4   2  */

#include<stdio.h>

void Table(int iNo)
{
    int iCnt =0;
    for(iCnt =10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}