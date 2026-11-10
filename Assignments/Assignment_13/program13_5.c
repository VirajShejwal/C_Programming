/*write a program wwhich accept number from user and return diff btw summation of even digit and summation of odd digit 
input : 2395
Output: -15 ( 2 -17)

input: 1018
output: 6 (8 -2)
        */

#include<stdio.h>

int Difference(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit= iNo % 10;

        if(iDigit % 2 ==0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);

}

int main()
{
    int iValue= 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Difference(iValue);

    printf(" Difference is : %d\n", iRet);

    return 0;
}