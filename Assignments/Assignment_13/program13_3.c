/*write a program wwhich accept number from user and return count of digit betwenn 3 and 7
input : 2395
Output: 1

input: 1014
output: 1
        */

#include<stdio.h>

int CountDigit(int iNo)
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

        if(iDigit > 3 && iDigit < 7 )
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

    iRet = CountDigit(iValue);

    printf(" %d\n", iRet);

    return 0;
}