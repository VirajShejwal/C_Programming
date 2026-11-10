/*write a program which accepts three numbers and print s=its mulyiplcation
input:5 4 7
output: 140*/


#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    iMult = iNo1 * iNo2 * iNo3;

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}
