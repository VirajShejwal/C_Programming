//Addition of all digit


#include<stdio.h>
#include<stdlib.h>

int SumDigit(int iNo)
{
    int iDigit =0;
    int iSum=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    while (iNo !=0)
    {
        iDigit=iNo % 10;
        iSum = iSum+iDigit;
        iNo=iNo / 10;
    }

    return iSum;
    
}
int main()
{
    int ivalue =0;
    int iRet =0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    iRet= SumDigit(ivalue);

    printf("Summation of digit : %d\n",iRet);

    return EXIT_SUCCESS;
}