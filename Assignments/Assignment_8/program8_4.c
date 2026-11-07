/*write a program which accept number and diplay its table/*
Input: 2
Output: 2   4   6   8   10  12  14  16  18  20*/

#include<stdio.h>

void Table(int iNo)
{
    int iCnt =0;
    for(iCnt =1; iCnt <= 10; iCnt++)
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