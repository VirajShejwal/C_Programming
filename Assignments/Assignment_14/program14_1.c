/*Write a program which accepts number from  user and display its multiplication of factors
Input : 12
Output : 144   (1*2*3*4*6)*/

#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter number : \n");
    scanf("%d",iRet);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}