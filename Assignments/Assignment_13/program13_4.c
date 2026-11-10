/*write a program wwhich accept number from user and return multiplication  of all digit 
input : 2395
Output: 270

input: 1014
output: 4
        */

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit= iNo % 10;

        iMult = iMult * iDigit;
        
        iNo = iNo / 10;
    }
    return iMult;

}

int main()
{
    int iValue= 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);

    printf(" multiplication is : %d\n", iRet);

    return 0;
}