/*Accept amount in US dollar and return its corresponding value in Indian currency consider 1 dollar as 70rs/*
Input: 10
Output: 70*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns= 0;
    iAns = iNo * 70;

   return iAns;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}