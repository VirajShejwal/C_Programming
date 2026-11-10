/*write a program which accepts total marks and obtaine marks from user and calculate percentage
input: 1000   745
output: 74.5%*/


#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0f;

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks and obtained marks: ");
    scanf("%d %d", &iValue1, &iValue2);

    fRet =Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%\n", fRet);

    return 0;
}
