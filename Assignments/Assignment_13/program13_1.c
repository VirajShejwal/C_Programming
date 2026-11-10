/*write a program wwhich accept number from user and return count of even digit
input : 2395
Output: 1

input: 1014
output: 2
        */

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit= iNo % 10;

        if(iDigit % 2==0 )
        {
            iCnt++;
        }

        iNo = iNo / 10;
    }
    return iCnt;

}

int main()
{
    int iValue= 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf(" %d\n", iRet);

    return 0;
}