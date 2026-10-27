//Avg of the number additon
//eg : 45 ->9   avg is 4.5


#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    int iDigit = 0, iSum = 0 , iCount = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum+ iDigit;
        iCount++;
        iNo = iNo / 10 ;

    }

    fAvg = (float)iSum / (float)iCount ;           

    return fAvg;
}
int main()
{
    int ivalue =0;
    int iRet =0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    iRet = AverageDigit(ivalue);

    printf("Aveerage of digit : %2.f\n",iRet);

    return EXIT_SUCCESS;
}